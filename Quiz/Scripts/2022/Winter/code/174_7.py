try:
    
    try:
        print(8, end="")
        print(int(4//0.0), end="")
        print(0, end="")
    except TypeError: 
        print(7, end="")
    except BaseException: 
        print(6, end="")
    else:
        print(5, end="")
    finally:
        print(2, end="")
    
except: print('error')
