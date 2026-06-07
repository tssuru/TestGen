try:
    
    try:
        print(3, end="")
        print(int("c0"), end="")
        print(1, end="")
    except Exception: 
        print(4, end="")
    except ZeroDivisionError: 
        print(6, end="")
    else:
        print(5, end="")
    finally:
        print(7, end="")
    
except: print('error')
