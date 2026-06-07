try:
    
    try:
        print(1, end="")
        print(int("b6"), end="")
        print(7, end="")
    except ZeroDivisionError: 
        print(4, end="")
    except TypeError: 
        print(0, end="")
    else:
        print(2, end="")
    finally:
        print(5, end="")
    
except: print('error')
