try:
    
    try:
        print(0, end="")
        print(int("a2"), end="")
        print(9, end="")
    except BaseException: 
        print(1, end="")
    except ZeroDivisionError: 
        print(5, end="")
    else:
        print(7, end="")
    finally:
        print(6, end="")
    
except: print('error')
