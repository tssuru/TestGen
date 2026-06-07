try:
    
    try:
        print(7, end="")
        print(int("3"), end="")
        print(1, end="")
    except ZeroDivisionError: 
        print(0, end="")
    except TypeError: 
        print(9, end="")
    else:
        print(8, end="")
    finally:
        print(5, end="")
    
except: print('error')
