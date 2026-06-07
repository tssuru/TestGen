try:
    
    try:
        print(2, end="")
        print(int(6%0.0), end="")
        print(0, end="")
    except BaseException: 
        print(4, end="")
    except ZeroDivisionError: 
        print(9, end="")
    else:
        print(3, end="")
    finally:
        print(8, end="")
    
except: print('error')
