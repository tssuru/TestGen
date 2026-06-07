try:
    
    try:
        print(4, end="")
        print(int("b3"), end="")
        print(0, end="")
    except TypeError: 
        print(8, end="")
    except ZeroDivisionError: 
        print(1, end="")
    else:
        print(2, end="")
    finally:
        print(6, end="")
    
except: print('error')
