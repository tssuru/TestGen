try:
    
    try:
        print(6, end="")
        print(int(1%3), end="")
        print(7, end="")
    except TypeError: 
        print(9, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(0, end="")
    finally:
        print(6, end="")
    
except: print('error')
