try:
    
    try:
        print(7, end="")
        print(int("6"), end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(2, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(9, end="")
    finally:
        print(8, end="")
    
except: print('error')
