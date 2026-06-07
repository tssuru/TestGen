try:
    
    try:
        print(0, end="")
        print(int("7"), end="")
        print(9, end="")
    except ZeroDivisionError: 
        print(2, end="")
    except Exception: 
        print(0, end="")
    else:
        print(1, end="")
    finally:
        print(6, end="")
    
except: print('error')
