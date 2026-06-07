try:
    
    try:
        print(6, end="")
        print(int("7"), end="")
        print(5, end="")
    except Exception: 
        print(0, end="")
    except ZeroDivisionError: 
        print(4, end="")
    else:
        print(8, end="")
    finally:
        print(3, end="")
    
except: print('error')
