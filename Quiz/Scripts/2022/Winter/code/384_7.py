try:
    
    try:
        print(9, end="")
        print(int("5"), end="")
        print(2, end="")
    except ZeroDivisionError: 
        print(7, end="")
    except TypeError: 
        print(6, end="")
    else:
        print(1, end="")
    finally:
        print(3, end="")
    
except: print('error')
