try:
    
    try:
        print(5, end="")
        print(int(4/3), end="")
        print(3, end="")
    except TypeError: 
        print(9, end="")
    except BaseException: 
        print(7, end="")
    else:
        print(6, end="")
    finally:
        print(1, end="")
    
except: print('error')
