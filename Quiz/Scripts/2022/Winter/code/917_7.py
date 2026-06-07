try:
    
    try:
        print(6, end="")
        print(7<=0, end="")
        print(9, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(8, end="")
    finally:
        print(0, end="")
    
except: print('error')
