try:
    
    try:
        print(2, end="")
        print(int(9//3), end="")
        print(7, end="")
    except BaseException: 
        print(3, end="")
    except TypeError: 
        print(5, end="")
    else:
        print(0, end="")
    finally:
        print(4, end="")
    
except: print('error')
