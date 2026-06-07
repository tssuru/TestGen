try:
    
    try:
        print(1, end="")
        print(int(3%0.0), end="")
        print(2, end="")
    except BaseException: 
        print(4, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(9, end="")
    finally:
        print(1, end="")
    
except: print('error')
