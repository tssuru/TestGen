try:
    
    try:
        print(7, end="")
        print(2==4, end="")
        print(4, end="")
    except BaseException: 
        print(6, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(1, end="")
    finally:
        print(5, end="")
    
except: print('error')
