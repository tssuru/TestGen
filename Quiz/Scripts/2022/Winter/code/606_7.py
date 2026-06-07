try:
    
    try:
        print(2, end="")
        print(int("0"), end="")
        print(7, end="")
    except TypeError: 
        print(6, end="")
    except ZeroDivisionError: 
        print(4, end="")
    else:
        print(6, end="")
    finally:
        print(8, end="")
    
except: print('error')
