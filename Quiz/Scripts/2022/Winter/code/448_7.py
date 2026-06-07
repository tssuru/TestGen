try:
    
    try:
        print(8, end="")
        print(int("9"), end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except BaseException: 
        print(6, end="")
    else:
        print(4, end="")
    finally:
        print(8, end="")
    
except: print('error')
