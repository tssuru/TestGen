try:
    
    try:
        print(9, end="")
        print(int("3"), end="")
        print(2, end="")
    except BaseException: 
        print(4, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(5, end="")
    finally:
        print(4, end="")
    
except: print('error')
