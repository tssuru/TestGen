try:
    
    try:
        print(5, end="")
        print(int("1"), end="")
        print(7, end="")
    except ZeroDivisionError: 
        print(0, end="")
    except Exception: 
        print(4, end="")
    else:
        print(9, end="")
    finally:
        print(1, end="")
    
except: print('error')
