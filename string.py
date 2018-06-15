dream = 'my c++ language is only 78'
index = 0
while index < len(dream):
    letter = dream[index]
    print(index,letter)
    index += 1

count = 0
for letter in dream:
    if letter == ' ':
        count+=1
    print(letter)


print('the number of blank is',count)
print(dream[19:23],dream[24:26])
print(dream.capitalize())
print(dream)
print("the index of on is",dream.find('on'),"the index of b is",dream.find('b'))
print("replace() is:",dream.replace(' 78',' 100'))
temp = "    "
dream +=temp
print("strip() :",dream,"finished and next :",dream.rstrip(),"finished")
