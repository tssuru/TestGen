try:
    
    try:
        print(9, end="")
        print(int("4"), end="")
        print(5, end="")
    except BaseException: 
        print(0, end="")
    except ZeroDivisionError: 
        print(6, end="")
    else:
        print(1, end="")
    finally:
        print(8, end="")
    
except: print('error')
