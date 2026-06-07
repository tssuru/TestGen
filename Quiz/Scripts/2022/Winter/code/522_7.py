try:
    
    try:
        print(0, end="")
        print(7<7, end="")
        print(9, end="")
    except ZeroDivisionError: 
        print(7, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(3, end="")
    finally:
        print(8, end="")
    
except: print('error')
