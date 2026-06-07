try:
    
    try:
        print(1, end="")
        print(3<=1, end="")
        print(9, end="")
    except BaseException: 
        print(0, end="")
    except ZeroDivisionError: 
        print(7, end="")
    else:
        print(5, end="")
    finally:
        print(3, end="")
    
except: print('error')
