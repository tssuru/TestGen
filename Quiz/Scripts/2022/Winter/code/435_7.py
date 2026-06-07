try:
    
    try:
        print(9, end="")
        print(int("8"), end="")
        print(5, end="")
    except ZeroDivisionError: 
        print(3, end="")
    except BaseException: 
        print(0, end="")
    else:
        print(2, end="")
    finally:
        print(8, end="")
    
except: print('error')
