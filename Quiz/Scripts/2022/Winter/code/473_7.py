try:
    
    try:
        print(9, end="")
        print(int("a4"), end="")
        print(0, end="")
    except Exception: 
        print(7, end="")
    except ZeroDivisionError: 
        print(2, end="")
    else:
        print(8, end="")
    finally:
        print(9, end="")
    
except: print('error')
