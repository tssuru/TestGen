try:
    
    try:
        print(0, end="")
        print(int(9/0.0), end="")
        print(1, end="")
    except ZeroDivisionError: 
        print(7, end="")
    except BaseException: 
        print(9, end="")
    else:
        print(5, end="")
    finally:
        print(4, end="")
    
except: print('error')
