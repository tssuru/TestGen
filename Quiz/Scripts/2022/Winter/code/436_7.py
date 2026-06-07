try:
    
    try:
        print(6, end="")
        print(int("7"), end="")
        print(1, end="")
    except ZeroDivisionError: 
        print(9, end="")
    except Exception: 
        print(4, end="")
    else:
        print(8, end="")
    finally:
        print(1, end="")
    
except: print('error')
