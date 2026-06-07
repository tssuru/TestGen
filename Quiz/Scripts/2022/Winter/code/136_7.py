try:
    
    try:
        print(1, end="")
        print(int("a6"), end="")
        print(9, end="")
    except TypeError: 
        print(5, end="")
    except ZeroDivisionError: 
        print(3, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
