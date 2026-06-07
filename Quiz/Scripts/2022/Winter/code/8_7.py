try:
    
    try:
        print(4, end="")
        print(int(3%0), end="")
        print(6, end="")
    except ZeroDivisionError: 
        print(9, end="")
    except BaseException: 
        print(7, end="")
    else:
        print(0, end="")
    finally:
        print(5, end="")
    
except: print('error')
