try:
    
    try:
        print(2, end="")
        print(int("6"), end="")
        print(3, end="")
    except TypeError: 
        print(9, end="")
    except ZeroDivisionError: 
        print(4, end="")
    else:
        print(2, end="")
    finally:
        print(9, end="")
    
except: print('error')
