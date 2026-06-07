try:
    
    try:
        print(5, end="")
        print(int("5"), end="")
        print(4, end="")
    except TypeError: 
        print(3, end="")
    except ZeroDivisionError: 
        print(2, end="")
    else:
        print(6, end="")
    finally:
        print(7, end="")
    
except: print('error')
