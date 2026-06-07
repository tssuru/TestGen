try:
    
    try:
        print(0, end="")
        print(int("a5"), end="")
        print(6, end="")
    except ZeroDivisionError: 
        print(2, end="")
    except Exception: 
        print(8, end="")
    else:
        print(1, end="")
    finally:
        print(9, end="")
    
except: print('error')
