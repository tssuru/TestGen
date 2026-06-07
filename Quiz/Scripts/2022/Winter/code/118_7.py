try:
    
    try:
        print(3, end="")
        print(int("6"), end="")
        print(4, end="")
    except ZeroDivisionError: 
        print(0, end="")
    except BaseException: 
        print(8, end="")
    else:
        print(1, end="")
    finally:
        print(5, end="")
    
except: print('error')
