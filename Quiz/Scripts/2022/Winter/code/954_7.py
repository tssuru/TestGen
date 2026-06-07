try:
    
    try:
        print(2, end="")
        print(int("c0"), end="")
        print(3, end="")
    except ZeroDivisionError: 
        print(8, end="")
    except Exception: 
        print(7, end="")
    else:
        print(4, end="")
    finally:
        print(1, end="")
    
except: print('error')
