try:
    
    try:
        print(1, end="")
        print(int("3"), end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(6, end="")
    except TypeError: 
        print(8, end="")
    else:
        print(2, end="")
    finally:
        print(1, end="")
    
except: print('error')
