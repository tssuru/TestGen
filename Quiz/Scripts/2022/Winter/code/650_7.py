try:
    
    try:
        print(8, end="")
        print(int("c6"), end="")
        print(2, end="")
    except ZeroDivisionError: 
        print(0, end="")
    except BaseException: 
        print(1, end="")
    else:
        print(9, end="")
    finally:
        print(3, end="")
    
except: print('error')
