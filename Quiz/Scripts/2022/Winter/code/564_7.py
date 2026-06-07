try:
    
    try:
        print(4, end="")
        print(6==9, end="")
        print(1, end="")
    except BaseException: 
        print(3, end="")
    except ZeroDivisionError: 
        print(7, end="")
    else:
        print(8, end="")
    finally:
        print(9, end="")
    
except: print('error')
