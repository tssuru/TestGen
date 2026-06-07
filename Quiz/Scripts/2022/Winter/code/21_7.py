try:
    
    try:
        print(4, end="")
        print(int(7%0.0), end="")
        print(3, end="")
    except BaseException: 
        print(8, end="")
    except ZeroDivisionError: 
        print(9, end="")
    else:
        print(1, end="")
    finally:
        print(6, end="")
    
except: print('error')
