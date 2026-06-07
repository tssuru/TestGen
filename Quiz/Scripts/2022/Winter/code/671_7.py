try:
    
    try:
        print(7, end="")
        print(3>=3, end="")
        print(4, end="")
    except ZeroDivisionError: 
        print(1, end="")
    except TypeError: 
        print(0, end="")
    else:
        print(6, end="")
    finally:
        print(8, end="")
    
except: print('error')
