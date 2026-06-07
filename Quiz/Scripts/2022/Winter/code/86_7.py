try:
    
    try:
        print(1, end="")
        print(int("c0"), end="")
        print(5, end="")
    except BaseException: 
        print(6, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(1, end="")
    finally:
        print(6, end="")
    
except: print('error')
