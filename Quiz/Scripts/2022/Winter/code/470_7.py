try:
    
    try:
        print(8, end="")
        print(int(2%0.0), end="")
        print(5, end="")
    except ZeroDivisionError: 
        print(6, end="")
    except BaseException: 
        print(3, end="")
    else:
        print(9, end="")
    finally:
        print(4, end="")
    
except: print('error')
