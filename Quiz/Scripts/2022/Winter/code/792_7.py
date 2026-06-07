try:
    
    try:
        print(6, end="")
        print(int("b5"), end="")
        print(9, end="")
    except BaseException: 
        print(6, end="")
    except ZeroDivisionError: 
        print(5, end="")
    else:
        print(7, end="")
    finally:
        print(8, end="")
    
except: print('error')
