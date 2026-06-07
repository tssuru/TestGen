try:
    
    try:
        print(3, end="")
        print(8>0, end="")
        print(1, end="")
    except BaseException: 
        print(2, end="")
    except ZeroDivisionError: 
        print(1, end="")
    else:
        print(3, end="")
    finally:
        print(7, end="")
    
except: print('error')
