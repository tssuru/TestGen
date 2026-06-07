try:
    
    try:
        print(5, end="")
        print(int("c6"), end="")
        print(9, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except TypeError: 
        print(7, end="")
    else:
        print(8, end="")
    finally:
        print(4, end="")
    
except: print('error')
