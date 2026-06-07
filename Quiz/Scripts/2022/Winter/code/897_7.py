try:
    
    try:
        print(3, end="")
        print(int("c0"), end="")
        print(7, end="")
    except TypeError: 
        print(4, end="")
    except ZeroDivisionError: 
        print(6, end="")
    else:
        print(1, end="")
    finally:
        print(5, end="")
    
except: print('error')
