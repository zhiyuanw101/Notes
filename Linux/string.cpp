#include<string>
#include<vector>
#include<iostream>
using namespace std;
string max_len_overlap(string s1, string s2);
int main(){
    string s1 = "abcdefgbcadbcdaf", s2 = "kbcda";
    cout<<max_len_overlap(s1, s2);
    return 0;
}
string max_len_overlap(string s1, string s2){
    size_t max_len = 0, max_start = 0;
    vector<vector<vector<size_t>>> memo(s2.size()+1, vector<vector<size_t>>(s2.size()));
    for(size_t i = 0; i<s2.size(); i++){
        for(size_t j = 0; j<s2.size(); j++){
            if(i==j){
                for(size_t k = 0; k<s1.size(); k++){
                    if(s1[k]==s2[i]) {
                        memo[i][j].push_back(k);
                        if(1>max_len){
                        max_len = 1;
                        max_start = i;
                    }
                    }
                }
            }
            else{
                vector<size_t> indices = memo[i][j-1];
                if(indices.empty()) continue;
                for(size_t k = 0; k<indices.size(); k++){
                    size_t index = indices[k];
                    if(s1[j-i+index] == s2[j]) {
                        memo[i][j].push_back(index);
                        if(j-i+1 > max_len){
                            max_len = j-i+1;
                            max_start = i;
                        }
                    }
                }
            }
        }
    }
    return s2.substr(max_start, max_len);
}