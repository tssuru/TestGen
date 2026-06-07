try:
    
    try:
        print(0, end="")
        print(int(9%0.0), end="")
        print(3, end="")
    except TypeError: 
        print(8, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(7, end="")
    finally:
        print(1, end="")
    
except: print('error')
