try:
    
    try:
        print(8, end="")
        print(int("b4"), end="")
        print(1, end="")
    except BaseException: 
        print(6, end="")
    except ZeroDivisionError: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(6, end="")
    
except: print('error')
