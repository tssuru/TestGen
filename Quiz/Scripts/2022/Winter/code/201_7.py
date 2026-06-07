try:
    
    try:
        print(6, end="")
        print(int("7"), end="")
        print(3, end="")
    except ZeroDivisionError: 
        print(8, end="")
    except Exception: 
        print(1, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
