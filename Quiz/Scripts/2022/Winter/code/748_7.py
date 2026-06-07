try:
    
    try:
        print(5, end="")
        print(int(3/0.0), end="")
        print(4, end="")
    except BaseException: 
        print(0, end="")
    except TypeError: 
        print(8, end="")
    else:
        print(1, end="")
    finally:
        print(9, end="")
    
except: print('error')
