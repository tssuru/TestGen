try:
    
    try:
        print(2, end="")
        print(int(9//3), end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(4, end="")
    except BaseException: 
        print(3, end="")
    else:
        print(6, end="")
    finally:
        print(6, end="")
    
except: print('error')
