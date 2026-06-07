try:
    
    try:
        print(4, end="")
        print(0<=9, end="")
        print(5, end="")
    except BaseException: 
        print(2, end="")
    except ZeroDivisionError: 
        print(9, end="")
    else:
        print(7, end="")
    finally:
        print(1, end="")
    
except: print('error')
