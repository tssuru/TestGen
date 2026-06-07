try:
    
    try:
        print(8, end="")
        print(6<4, end="")
        print(2, end="")
    except BaseException: 
        print(7, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(9, end="")
    finally:
        print(8, end="")
    
except: print('error')
