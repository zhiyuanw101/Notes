# Python面试题
---
## 声明全局
```python
global a
```
## 标准库
```python
import os
import sys
import math
import datetime
import re
```
- `os.path.join(path, *paths)`
- os：负责和操作系统交互
- sys：负责和解释器交互
## dict
```py
#合并
dict2.update(dict1)
#取键值对iterator
dict1.items()
#取键iterator
dict1.keys()
#取值iterator
dict.values()
```
## *args, **kwargs
可变参数
- *args：非键值对可变参数，以list/tuple传递
- **kwargs：键值对可变参数，以dict传递
## \_\_init__/\_\_new__
//TODO:
- 单列模式？

## 列表生成式
```py
[expression for x in iterable [filter]]
```
## 随机数
```py
import random
import numpy as np
#int in interval
int_x = random.randint(10, 20)
# list of decimal
dec_list = np.random.randn(5)
# decimal
dec_x = random.random()
```

## lambda
- 拥有自己命名空间
- 不同于内联函数（C++），不会提高效率
```py
lambda [arg1 [,arg2,.....argn]]:expression

# Example
sum = lambda x, y: x+y
```

## sort()/sorted()
```py
# sort为list函数
list1.sort([cmp[, key[, reverse]]])
# sorted()对于任意iterable
sorted(iterable[, cmp[, key[, reverse]]])
# key为一个函数（只有一个参数与返回值），每个元素比较前被调用
# cmp主要在py2中使用
# 返回new sorted list
```

## Counter()
//TODO
## re正则表达式
//TODO
- (.\*) 与 (.*?)：前为贪婪匹配，后为非贪婪匹配
- re.sub()
## 异常模块
//TODO
try...except...finally/try...except....else

## zip()
返回iterator of tuples，each tuple with elements from all the iterables，截取最短长度
```py
zip(*iterables)
# unzip
c,v = zip(*zippedList)
```

## python提高运行效率
//TODO
1. 使用生成器，减少内存
2. if elif，最有可能的放前面

## 深复制，浅复制
1. 不可变类型（tuple，str）：copy/deepcopy与赋值一样，对象的id值与浅复制原来的值相同
2. 可变对象（列表和字典）：
    - copy.deepcopy(x):完全独立的复制
    - copy.copy(x):对于外层列表为独立对象，修改原来其中复杂子对象，会影响浅复制

## 魔法方法？？
\_\_init__:对象初始化方法

\_\_new__:创建对象时候执行的方法，单列模式会用到

\_\_str__:当使用print输出对象的时候，只要自己定义了_\_str__(self)方法，那么就会打印从在这个方法中return的数据

\_\_del__:删除对象执行的方法

## [Python 垃圾回收机制（garbage collection）](https://www.cnblogs.com/TM0831/p/10599716.html)
//TODO
以引用计数为主，标记-清除和分代清除为辅的机制，其中标记-清除和分代回收主要是为了处理循环引用的难题。
### 引用计数算法
- 当有1个变量保存了对象的引用时，此对象的引用计数就会加1
- 当使用del删除变量指向的对象时，如果对象的引用计数不为1，比如3，那么此时只会让这个引用计数减1，即变为2，当再次调用del时，变为1，如果再调用1次del，此时会真的把对象进行删除

## 函数式编程
### 高阶函数
一个函数就接收另一个函数作为参数，称为高阶函数
#### 1. map():
```py
map(fn, iterable)
# fn:函数，可以使用lambda
# iterable：序列
# 返回一个迭代器iterator
```
#### 2. reduce()
- 先把前两个传给函数，结果和第三个传给函数，以此类推，得到单个结果
```py
from functools import reduce
reduce(fn, iterable)
# fn：接受两个参数

# Example：
from functools import reduce
def fn(x, y):
     return x * 10 + y
reduce(fn, [1, 3, 5, 7, 9])
# 13579
```
#### 3. filter()
返回iterator，其中元素fn返回true
```py
filter(fu, iterable)
# fn：函数返回true/false
```
### 返回函数

### [Python装饰器](https://www.runoob.com/w3cnote/python-func-decorators.html)
在代码运行期间动态增加功能的方式，称之为“装饰器”（Decorator）
//TODO