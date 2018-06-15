- n次方是 **
- 优先级： Parenthesis> Power > Multiplication > Addition > Left to Right  
求幂的优先级高于乘除
- 变量可以快速的定义 字符串直接可加
- type: 告知变量的类型
- 强转是类型加括号  可以直接将一个由数字组成的字符串转化为整数
- print可以输出多项 每个逗号会自动添加空格
- Python的comment （注释） #
- inpu 输入的内容是字符串 需要强转
- 不要用tab
- if else  elif
- try except
- def 函数名：    return statement
- for in
- found 布尔型？？？
- None
- len ＋数组名  计算数组的长度
- print(s[0:7]) 这个太好用了 slicing strings  同样的 左闭右开,可以省略冒号两边的界限，省略后变为正无穷,加好直接连接
- in 也能够判断一个元素是否在集合内
- string.lower() 变小写   string library, dir(string) 可以知道该数据可以使用哪些函数  
   1. replace() 参数为两个元素，会替换掉数组所有的满足要求的元素
   2. lstrip() 去掉左边的空格 rstrip() 去掉右边的空格   strip()  去掉两侧的空格
   3. startswitch()  判断是否以xx开头
   4. str.find(str, beg=0, end=len(string))

#### 文件操作
open()
1. handle = open(filename , mode)   ; filename is a string ,and mode shuld be 'r' if you want to read it and 'w' if you want to write to the file
2. ``print(handle)`` 并不会输出对应的内容，而是输出这个文件的属性
3. \n仍旧代表换行，允许出现在字符串内,仍看作一个字符
4. 文件的每一行都是一个字符串，可以进行输出，for xx in xx :
5. ``.read()``可以阅读整个文件，作为一个字符串
6. ```py
fhand = open('xczx.txt')
for line in fhand :
    line = line.rstrip()
    #这里同样可以删除换行符
    if line.startswith('From: ‘） ：
        print(line)
```
查找
7. 可以用in 判断查找某个string是否在某一行

#### list
- list由[]包裹，内部变量用,分割
- 一个list能够包括Python的所有变量，包括list
- 一个list可以是空的
- 与string的对比：
  1. string是不可变的
  ```py
  x='banana'
  x[0] = 'B'
  ```
  这段代码就是错误的。
  因此我们要改变一个string，如果不使用对应的函数，只能重新定义一个。
  2. list是可变的，可以通过类似C的下标任意改变元素
- 同样可以用``len(name)``得到长度
- ``range(int)``可以返回一个list
- 可以相加 可以用``:``,``type``,``dir``
- 创建一个空的ist,并使用 append 向尾部添加元素
```py
stuff = list()
stuff.append('book')
stuff.append(99)
stuff.append('cookie')
print(stuff)
```
这段代码的输出就是 ``['book',99,'cookie']``  
x.append()  就可以直接翻番了
- 可以用in 查找某个元素是否在list内,返回值是 True or False
- x.sort()  排序
- .len()  长度, .sum()  总数, .min() .max() 最大最小
- split()拆分string为list,split可以有参数
```py
line = 'I;am;a;boy'
word = line.split(';')
```
输出就是每个单词
