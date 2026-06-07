try:
    
    try:
        print(1, end="")
        print(int("7"), end="")
        print(6, end="")
    except ZeroDivisionError: 
        print(8, end="")
    except Exception: 
        print(2, end="")
    else:
        print(3, end="")
    finally:
        print(9, end="")
    
except: print('error')
