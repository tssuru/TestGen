try:
    
    try:
        print(9, end="")
        print(int("3"), end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(8, end="")
    except BaseException: 
        print(2, end="")
    else:
        print(4, end="")
    finally:
        print(7, end="")
    
except: print('error')
