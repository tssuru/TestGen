try:
    
    try:
        print(0, end="")
        print(1!=8, end="")
        print(4, end="")
    except BaseException: 
        print(9, end="")
    except ZeroDivisionError: 
        print(6, end="")
    else:
        print(5, end="")
    finally:
        print(7, end="")
    
except: print('error')
