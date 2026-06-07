try:
    
    try:
        print(5, end="")
        print(int("b7"), end="")
        print(4, end="")
    except ZeroDivisionError: 
        print(3, end="")
    except Exception: 
        print(1, end="")
    else:
        print(6, end="")
    finally:
        print(8, end="")
    
except: print('error')
