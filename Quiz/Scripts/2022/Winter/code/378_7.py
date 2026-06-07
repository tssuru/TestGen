try:
    
    try:
        print(6, end="")
        print(int(7//0.0), end="")
        print(2, end="")
    except BaseException: 
        print(8, end="")
    except TypeError: 
        print(1, end="")
    else:
        print(0, end="")
    finally:
        print(5, end="")
    
except: print('error')
