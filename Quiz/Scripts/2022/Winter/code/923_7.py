try:
    
    try:
        print(6, end="")
        print(int(8/3), end="")
        print(3, end="")
    except BaseException: 
        print(7, end="")
    except TypeError: 
        print(2, end="")
    else:
        print(0, end="")
    finally:
        print(7, end="")
    
except: print('error')
