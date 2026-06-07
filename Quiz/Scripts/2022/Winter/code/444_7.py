try:
    
    try:
        print(7, end="")
        print(int(1/0.0), end="")
        print(0, end="")
    except TypeError: 
        print(6, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(8, end="")
    finally:
        print(2, end="")
    
except: print('error')
