try:
    
    try:
        print(7, end="")
        print(int("a5"), end="")
        print(1, end="")
    except ZeroDivisionError: 
        print(8, end="")
    except BaseException: 
        print(7, end="")
    else:
        print(0, end="")
    finally:
        print(6, end="")
    
except: print('error')
