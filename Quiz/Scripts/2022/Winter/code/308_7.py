try:
    
    try:
        print(4, end="")
        print(int(1%0), end="")
        print(7, end="")
    except TypeError: 
        print(3, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(9, end="")
    finally:
        print(2, end="")
    
except: print('error')
