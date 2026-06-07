try:
    
    try:
        print(8, end="")
        print(int(7//3), end="")
        print(4, end="")
    except BaseException: 
        print(5, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(3, end="")
    finally:
        print(2, end="")
    
except: print('error')
