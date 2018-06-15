#coding=utf-8
print("统计数字,计算平均值 ，文件名是mbox-short.txt ")
# Use the file name mbox-short.txt as the file name
while True:
    fname = input("Enter file name: ")
    try:
        fh = open(fname)
        break
    except:
        continue
total = 0
count = 0
for line in fh:
    if not line.startswith("X-DSPAM-Confidence:") : continue
    else :
        start = line.find(':')
        new_ = line[start+1 : ]
        new_ = new_.lstrip()
        total += float(new_)
        count += 1
        #print(line)
print("Average spam confidence:",total/count)
