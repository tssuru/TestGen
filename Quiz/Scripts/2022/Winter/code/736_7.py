try:
    
    try:
        print(0, end="")
        print(int("4"), end="")
        print(1, end="")
    except BaseException: 
        print(2, end="")
    except ZeroDivisionError: 
        print(5, end="")
    else:
        print(5, end="")
    finally:
        print(3, end="")
    
except: print('error')
