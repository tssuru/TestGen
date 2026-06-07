try:
    
    try:
        print(3, end="")
        print(int(1/0), end="")
        print(6, end="")
    except BaseException: 
        print(5, end="")
    except ZeroDivisionError: 
        print(9, end="")
    else:
        print(7, end="")
    finally:
        print(3, end="")
    
except: print('error')
