try:
    
    try:
        print(6, end="")
        print(int(7//0.0), end="")
        print(8, end="")
    except TypeError: 
        print(4, end="")
    except BaseException: 
        print(3, end="")
    else:
        print(2, end="")
    finally:
        print(8, end="")
    
except: print('error')
