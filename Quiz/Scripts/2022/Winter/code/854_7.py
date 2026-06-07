try:
    
    try:
        print(3, end="")
        print(int(6%2), end="")
        print(2, end="")
    except BaseException: 
        print(0, end="")
    except TypeError: 
        print(7, end="")
    else:
        print(9, end="")
    finally:
        print(5, end="")
    
except: print('error')
