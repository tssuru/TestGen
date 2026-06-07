try:
    
    try:
        print(8, end="")
        print(int(7//3), end="")
        print(0, end="")
    except BaseException: 
        print(3, end="")
    except TypeError: 
        print(4, end="")
    else:
        print(5, end="")
    finally:
        print(8, end="")
    
except: print('error')
