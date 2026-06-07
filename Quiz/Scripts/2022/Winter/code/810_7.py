try:
    
    try:
        print(9, end="")
        print(int("b1"), end="")
        print(3, end="")
    except BaseException: 
        print(2, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(5, end="")
    finally:
        print(7, end="")
    
except: print('error')
