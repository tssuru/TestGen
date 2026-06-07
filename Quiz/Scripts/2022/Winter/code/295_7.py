try:
    
    try:
        print(8, end="")
        print(int("a6"), end="")
        print(2, end="")
    except Exception: 
        print(3, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(8, end="")
    finally:
        print(1, end="")
    
except: print('error')
