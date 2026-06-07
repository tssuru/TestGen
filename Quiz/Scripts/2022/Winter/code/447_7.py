try:
    
    try:
        print(1, end="")
        print(4<2, end="")
        print(6, end="")
    except BaseException: 
        print(0, end="")
    except ZeroDivisionError: 
        print(5, end="")
    else:
        print(7, end="")
    finally:
        print(9, end="")
    
except: print('error')
