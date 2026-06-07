try:
    
    try:
        print(0, end="")
        print(4>=0, end="")
        print(1, end="")
    except ZeroDivisionError: 
        print(7, end="")
    except TypeError: 
        print(9, end="")
    else:
        print(6, end="")
    finally:
        print(8, end="")
    
except: print('error')
