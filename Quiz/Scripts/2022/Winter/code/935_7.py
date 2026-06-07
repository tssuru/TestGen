try:
    
    try:
        print(9, end="")
        print(int("d6"), end="")
        print(6, end="")
    except ZeroDivisionError: 
        print(1, end="")
    except TypeError: 
        print(5, end="")
    else:
        print(2, end="")
    finally:
        print(4, end="")
    
except: print('error')
