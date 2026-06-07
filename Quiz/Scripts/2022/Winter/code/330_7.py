try:
    
    try:
        print(7, end="")
        print(int(2%0), end="")
        print(3, end="")
    except ZeroDivisionError: 
        print(6, end="")
    except BaseException: 
        print(9, end="")
    else:
        print(1, end="")
    finally:
        print(5, end="")
    
except: print('error')
