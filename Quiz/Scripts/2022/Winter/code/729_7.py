try:
    
    try:
        print(3, end="")
        print(int("b6"), end="")
        print(7, end="")
    except ZeroDivisionError: 
        print(8, end="")
    except Exception: 
        print(8, end="")
    else:
        print(2, end="")
    finally:
        print(9, end="")
    
except: print('error')
