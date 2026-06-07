try:
    
    try:
        print(5, end="")
        print(int("4"), end="")
        print(2, end="")
    except TypeError: 
        print(0, end="")
    except ZeroDivisionError: 
        print(3, end="")
    else:
        print(9, end="")
    finally:
        print(8, end="")
    
except: print('error')
