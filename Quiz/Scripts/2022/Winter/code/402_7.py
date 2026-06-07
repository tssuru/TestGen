try:
    
    try:
        print(7, end="")
        print(int("2"), end="")
        print(6, end="")
    except Exception: 
        print(4, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(7, end="")
    finally:
        print(9, end="")
    
except: print('error')
