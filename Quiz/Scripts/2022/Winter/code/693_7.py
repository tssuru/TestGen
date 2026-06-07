try:
    
    try:
        print(4, end="")
        print(int("c2"), end="")
        print(3, end="")
    except ZeroDivisionError: 
        print(7, end="")
    except Exception: 
        print(9, end="")
    else:
        print(0, end="")
    finally:
        print(6, end="")
    
except: print('error')
