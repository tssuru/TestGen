try:
    
    try:
        print(1, end="")
        print(int("d7"), end="")
        print(5, end="")
    except BaseException: 
        print(4, end="")
    except ZeroDivisionError: 
        print(6, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
