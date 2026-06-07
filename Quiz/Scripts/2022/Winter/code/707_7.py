try:
    
    try:
        print(4, end="")
        print(int(7/2), end="")
        print(8, end="")
    except TypeError: 
        print(3, end="")
    except BaseException: 
        print(9, end="")
    else:
        print(0, end="")
    finally:
        print(6, end="")
    
except: print('error')
