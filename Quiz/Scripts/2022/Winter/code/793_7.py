try:
    
    try:
        print(2, end="")
        print(int("0"), end="")
        print(9, end="")
    except ZeroDivisionError: 
        print(1, end="")
    except TypeError: 
        print(3, end="")
    else:
        print(4, end="")
    finally:
        print(4, end="")
    
except: print('error')
