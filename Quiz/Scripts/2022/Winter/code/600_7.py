try:
    
    try:
        print(7, end="")
        print(int("5"), end="")
        print(8, end="")
    except ZeroDivisionError: 
        print(6, end="")
    except Exception: 
        print(2, end="")
    else:
        print(1, end="")
    finally:
        print(0, end="")
    
except: print('error')
