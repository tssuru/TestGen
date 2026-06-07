try:
    
    try:
        print(8, end="")
        print(int("a3"), end="")
        print(9, end="")
    except TypeError: 
        print(7, end="")
    except ZeroDivisionError: 
        print(6, end="")
    else:
        print(5, end="")
    finally:
        print(8, end="")
    
except: print('error')
