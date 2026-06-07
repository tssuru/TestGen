try:
    
    try:
        print(1, end="")
        print(int("a4"), end="")
        print(2, end="")
    except BaseException: 
        print(5, end="")
    except ZeroDivisionError: 
        print(9, end="")
    else:
        print(3, end="")
    finally:
        print(7, end="")
    
except: print('error')
