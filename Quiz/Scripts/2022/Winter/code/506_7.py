try:
    
    try:
        print(2, end="")
        print(int(3%0), end="")
        print(7, end="")
    except ZeroDivisionError: 
        print(0, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(6, end="")
    finally:
        print(5, end="")
    
except: print('error')
