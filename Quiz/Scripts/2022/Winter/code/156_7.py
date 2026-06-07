try:
    
    try:
        print(1, end="")
        print(int(3//0), end="")
        print(4, end="")
    except BaseException: 
        print(9, end="")
    except ZeroDivisionError: 
        print(6, end="")
    else:
        print(4, end="")
    finally:
        print(7, end="")
    
except: print('error')
