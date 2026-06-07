try:
    
    try:
        print(6, end="")
        print(int("a5"), end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(8, end="")
    except Exception: 
        print(3, end="")
    else:
        print(4, end="")
    finally:
        print(0, end="")
    
except: print('error')
