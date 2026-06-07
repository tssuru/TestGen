try:
    
    try:
        print(3, end="")
        print(int(2/2), end="")
        print(5, end="")
    except BaseException: 
        print(2, end="")
    except TypeError: 
        print(1, end="")
    else:
        print(0, end="")
    finally:
        print(9, end="")
    
except: print('error')
