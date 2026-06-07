try:
    
    try:
        print(3, end="")
        print(int("1"), end="")
        print(6, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except BaseException: 
        print(1, end="")
    else:
        print(2, end="")
    finally:
        print(3, end="")
    
except: print('error')
