try:
    
    try:
        print(1, end="")
        print(int("c6"), end="")
        print(9, end="")
    except TypeError: 
        print(5, end="")
    except ZeroDivisionError: 
        print(3, end="")
    else:
        print(4, end="")
    finally:
        print(2, end="")
    
except: print('error')
