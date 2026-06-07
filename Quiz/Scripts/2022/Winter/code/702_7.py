try:
    
    try:
        print(7, end="")
        print(int("8"), end="")
        print(1, end="")
    except TypeError: 
        print(5, end="")
    except ZeroDivisionError: 
        print(3, end="")
    else:
        print(1, end="")
    finally:
        print(4, end="")
    
except: print('error')
