try:
    
    try:
        print(6, end="")
        print(5>=3, end="")
        print(1, end="")
    except TypeError: 
        print(7, end="")
    except ZeroDivisionError: 
        print(3, end="")
    else:
        print(9, end="")
    finally:
        print(2, end="")
    
except: print('error')
