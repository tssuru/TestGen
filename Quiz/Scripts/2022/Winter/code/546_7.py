try:
    
    try:
        print(4, end="")
        print(int("b9"), end="")
        print(7, end="")
    except BaseException: 
        print(1, end="")
    except ZeroDivisionError: 
        print(5, end="")
    else:
        print(3, end="")
    finally:
        print(0, end="")
    
except: print('error')
