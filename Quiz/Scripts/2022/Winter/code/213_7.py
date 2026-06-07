try:
    
    try:
        print(7, end="")
        print(int("8"), end="")
        print(1, end="")
    except ZeroDivisionError: 
        print(4, end="")
    except Exception: 
        print(0, end="")
    else:
        print(9, end="")
    finally:
        print(5, end="")
    
except: print('error')
