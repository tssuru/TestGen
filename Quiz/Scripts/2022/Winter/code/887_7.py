try:
    
    try:
        print(8, end="")
        print(7<=6, end="")
        print(2, end="")
    except BaseException: 
        print(0, end="")
    except ZeroDivisionError: 
        print(9, end="")
    else:
        print(6, end="")
    finally:
        print(4, end="")
    
except: print('error')
