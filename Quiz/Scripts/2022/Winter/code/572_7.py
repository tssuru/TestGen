try:
    
    try:
        print(1, end="")
        print(int("c2"), end="")
        print(5, end="")
    except Exception: 
        print(5, end="")
    except ZeroDivisionError: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(0, end="")
    
except: print('error')
