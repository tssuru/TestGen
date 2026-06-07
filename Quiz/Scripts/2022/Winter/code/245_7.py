try:
    
    try:
        print(6, end="")
        print(int("d9"), end="")
        print(2, end="")
    except ZeroDivisionError: 
        print(1, end="")
    except TypeError: 
        print(4, end="")
    else:
        print(9, end="")
    finally:
        print(5, end="")
    
except: print('error')
