try:
    
    try:
        print(0, end="")
        print(int(4%0.0), end="")
        print(1, end="")
    except TypeError: 
        print(7, end="")
    except BaseException: 
        print(8, end="")
    else:
        print(4, end="")
    finally:
        print(3, end="")
    
except: print('error')
