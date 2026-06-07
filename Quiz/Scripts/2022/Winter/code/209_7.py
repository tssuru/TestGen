try:
    
    try:
        print(0, end="")
        print(int("4"), end="")
        print(6, end="")
    except ZeroDivisionError: 
        print(2, end="")
    except TypeError: 
        print(9, end="")
    else:
        print(8, end="")
    finally:
        print(0, end="")
    
except: print('error')
