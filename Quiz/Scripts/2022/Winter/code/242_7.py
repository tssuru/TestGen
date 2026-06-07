try:
    
    try:
        print(6, end="")
        print(int("4"), end="")
        print(9, end="")
    except Exception: 
        print(7, end="")
    except ZeroDivisionError: 
        print(9, end="")
    else:
        print(0, end="")
    finally:
        print(3, end="")
    
except: print('error')
