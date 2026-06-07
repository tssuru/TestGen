try:
    
    try:
        print(6, end="")
        print(int("9"), end="")
        print(4, end="")
    except ZeroDivisionError: 
        print(8, end="")
    except TypeError: 
        print(0, end="")
    else:
        print(7, end="")
    finally:
        print(3, end="")
    
except: print('error')
