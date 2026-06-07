try:
    
    try:
        print(3, end="")
        print(int("2"), end="")
        print(7, end="")
    except BaseException: 
        print(5, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(3, end="")
    finally:
        print(9, end="")
    
except: print('error')
