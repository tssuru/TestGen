try:
    
    try:
        print(3, end="")
        print(int("1"), end="")
        print(8, end="")
    except BaseException: 
        print(0, end="")
    except ZeroDivisionError: 
        print(9, end="")
    else:
        print(2, end="")
    finally:
        print(6, end="")
    
except: print('error')
