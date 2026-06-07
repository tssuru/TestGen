try:
    
    try:
        print(1, end="")
        print(int("2"), end="")
        print(6, end="")
    except ZeroDivisionError: 
        print(3, end="")
    except Exception: 
        print(0, end="")
    else:
        print(7, end="")
    finally:
        print(4, end="")
    
except: print('error')
