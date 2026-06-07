try:
    
    try:
        print(5, end="")
        print(int("c0"), end="")
        print(3, end="")
    except ZeroDivisionError: 
        print(7, end="")
    except Exception: 
        print(4, end="")
    else:
        print(9, end="")
    finally:
        print(2, end="")
    
except: print('error')
