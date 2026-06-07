try:
    
    try:
        print(5, end="")
        print(8==5, end="")
        print(7, end="")
    except ZeroDivisionError: 
        print(1, end="")
    except TypeError: 
        print(3, end="")
    else:
        print(4, end="")
    finally:
        print(2, end="")
    
except: print('error')
