try:
    
    try:
        print(9, end="")
        print(int(8/0.0), end="")
        print(7, end="")
    except TypeError: 
        print(2, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(3, end="")
    finally:
        print(0, end="")
    
except: print('error')
