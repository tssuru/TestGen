try:
    
    try:
        print(0, end="")
        print(int("8"), end="")
        print(4, end="")
    except ZeroDivisionError: 
        print(1, end="")
    except BaseException: 
        print(3, end="")
    else:
        print(6, end="")
    finally:
        print(2, end="")
    
except: print('error')
