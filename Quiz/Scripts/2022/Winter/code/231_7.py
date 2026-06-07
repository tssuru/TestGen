try:
    
    try:
        print(4, end="")
        print(int(2%0.0), end="")
        print(9, end="")
    except BaseException: 
        print(7, end="")
    except TypeError: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(1, end="")
    
except: print('error')
