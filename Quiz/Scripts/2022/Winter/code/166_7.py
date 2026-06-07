try:
    
    try:
        print(8, end="")
        print(3<2, end="")
        print(5, end="")
    except ZeroDivisionError: 
        print(2, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(0, end="")
    finally:
        print(9, end="")
    
except: print('error')
