try:
    
    try:
        print(9, end="")
        print(int("a0"), end="")
        print(8, end="")
    except ZeroDivisionError: 
        print(4, end="")
    except TypeError: 
        print(1, end="")
    else:
        print(1, end="")
    finally:
        print(0, end="")
    
except: print('error')
