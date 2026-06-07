try:
    
    try:
        print(2, end="")
        print(int("d6"), end="")
        print(1, end="")
    except ZeroDivisionError: 
        print(8, end="")
    except BaseException: 
        print(7, end="")
    else:
        print(0, end="")
    finally:
        print(9, end="")
    
except: print('error')
