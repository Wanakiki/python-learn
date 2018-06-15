#coding=utf-8
print('打开文件romeo.txt,将其中的单词分割开,制作一个list将单词添加到list内(不允许重复),排序后输出')
fname = input("Enter file name: ")
fh = open(fname)
lst = list()
for line in fh:
    words = line.split()
    for word in words:
        if word not in lst:
            lst.append(word)
        else:
            continue
list = lst.sort()
print(lst)
