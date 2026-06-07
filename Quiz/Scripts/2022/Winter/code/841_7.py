try:
    
    try:
        print(9, end="")
        print(7>9, end="")
        print(5, end="")
    except TypeError: 
        print(2, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(4, end="")
    finally:
        print(6, end="")
    
except: print('error')
