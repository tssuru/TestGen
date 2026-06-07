try:
    
    try:
        print(6, end="")
        print(int(5//0), end="")
        print(4, end="")
    except ZeroDivisionError: 
        print(2, end="")
    except BaseException: 
        print(7, end="")
    else:
        print(3, end="")
    finally:
        print(9, end="")
    
except: print('error')
