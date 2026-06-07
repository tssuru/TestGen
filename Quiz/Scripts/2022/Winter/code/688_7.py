try:
    
    try:
        print(1, end="")
        print(int("2"), end="")
        print(4, end="")
    except TypeError: 
        print(1, end="")
    except ZeroDivisionError: 
        print(5, end="")
    else:
        print(9, end="")
    finally:
        print(7, end="")
    
except: print('error')
