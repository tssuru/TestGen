try:
    
    try:
        print(1, end="")
        print(int("b8"), end="")
        print(3, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except BaseException: 
        print(2, end="")
    else:
        print(9, end="")
    finally:
        print(4, end="")
    
except: print('error')
