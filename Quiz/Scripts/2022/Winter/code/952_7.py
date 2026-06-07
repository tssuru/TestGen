try:
    
    try:
        print(4, end="")
        print(int(7//0), end="")
        print(5, end="")
    except BaseException: 
        print(3, end="")
    except TypeError: 
        print(7, end="")
    else:
        print(5, end="")
    finally:
        print(8, end="")
    
except: print('error')
