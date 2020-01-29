## [`std :: istream_iterator`](http://www.cplusplus.com/reference/iterator/istream_iterator/)

Example:

````c++
    // istream_iterator example
    #include <iostream>     // std::cin, std::cout
    #include <iterator>     // std::istream_iterator

    int main () {
    double value1, value2;
    std::cout << "Please, insert two values: ";

    std::istream_iterator<double> eos;              // end-of-stream iterator
    std::istream_iterator<double> iit (std::cin);   // stdin iterator

    if (iit!=eos) value1=*iit;

    ++iit;
    if (iit!=eos) value2=*iit;

    std::cout << value1 << "*" << value2 << "=" << (value1*value2) << '\n';

    return 0;
    }
````

- They are constructed from a `basic_istream` object, to which they become associated, so that whenever `operator++` is used on the iterator, it extracts an element from the stream (using `operator>>`).

## [Keyword `explicit`](https://stackoverflow.com/questions/121162/what-does-the-explicit-keyword-mean)

- Prefixing the explicit keyword to the constructor prevents the compiler from using that constructor for implicit conversions.

