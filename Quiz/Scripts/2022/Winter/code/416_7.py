try:
    
    try:
        print(2, end="")
        print(int("c8"), end="")
        print(4, end="")
    except ZeroDivisionError: 
        print(7, end="")
    except BaseException: 
        print(3, end="")
    else:
        print(3, end="")
    finally:
        print(7, end="")
    
except: print('error')
