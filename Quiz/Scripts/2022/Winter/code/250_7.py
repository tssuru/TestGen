try:
    
    try:
        print(5, end="")
        print(int("6"), end="")
        print(7, end="")
    except TypeError: 
        print(3, end="")
    except ZeroDivisionError: 
        print(4, end="")
    else:
        print(0, end="")
    finally:
        print(2, end="")
    
except: print('error')
