try:
    
    try:
        print(6, end="")
        print(int(9//0.0), end="")
        print(3, end="")
    except BaseException: 
        print(4, end="")
    except TypeError: 
        print(7, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
