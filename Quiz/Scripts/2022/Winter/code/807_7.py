try:
    
    try:
        print(8, end="")
        print(int("6"), end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(9, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(5, end="")
    finally:
        print(2, end="")
    
except: print('error')
