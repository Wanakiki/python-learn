while True :
    flag = True
    res = input("Plese input a email address:")
    start = res.find('@')
    end = res.find('.',start)
    name = res[start+1:end]
    if name == 'qq':
        print("it's father is tengteng")
    elif name == "163" :
        print("i like netease cloud music")
    elif name == "gmail" :
        print("android is very very good!")
    elif name == "stu" :
        print("you must a student, just like me")
    else :
        print("i didn't know what it is , sorry...")
    
    while True:
        case = input("want to try again? input 'yes' or 'no'")
        if case == "no" :
            flag = False
            break
        elif case == "yes" :
            break
    
    if not flag :
        break

