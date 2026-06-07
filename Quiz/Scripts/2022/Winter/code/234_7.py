try:
    
    try:
        print(2, end="")
        print(int(9/3), end="")
        print(0, end="")
    except BaseException: 
        print(6, end="")
    except TypeError: 
        print(1, end="")
    else:
        print(7, end="")
    finally:
        print(4, end="")
    
except: print('error')
