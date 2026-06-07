try:
    
    try:
        print(0, end="")
        print(int("4"), end="")
        print(9, end="")
    except TypeError: 
        print(6, end="")
    except ZeroDivisionError: 
        print(5, end="")
    else:
        print(4, end="")
    finally:
        print(5, end="")
    
except: print('error')
