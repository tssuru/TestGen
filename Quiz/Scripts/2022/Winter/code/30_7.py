try:
    
    try:
        print(9, end="")
        print(int(5%0), end="")
        print(4, end="")
    except ZeroDivisionError: 
        print(3, end="")
    except BaseException: 
        print(7, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
