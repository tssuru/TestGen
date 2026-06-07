try:
    
    try:
        print(9, end="")
        print(int("b2"), end="")
        print(8, end="")
    except TypeError: 
        print(0, end="")
    except ZeroDivisionError: 
        print(4, end="")
    else:
        print(1, end="")
    finally:
        print(7, end="")
    
except: print('error')
