# Linux

## Shell syntax
---
### Variable
```shell
//Declare
$ Name="zhiyuanw"
$ echo $Name
zhiyuanw
//Read only
$ readonly Name
//Delete
$ unset Name
```
### String
```shell
$ str1="This is $str quote"
$ str2='This is single quote'
$ str='double'
$ echo $str1
$ echo $str2
$ echo ${#str1}
$ echo ${str1:1:4}
```
### Array
```shell
$ array_name=(value0 value1 value2 value3)
```
### Comments
```shell
$ # comments
```