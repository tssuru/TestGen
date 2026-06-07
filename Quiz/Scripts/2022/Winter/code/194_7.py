try:
    
    try:
        print(1, end="")
        print(int("3"), end="")
        print(8, end="")
    except ZeroDivisionError: 
        print(0, end="")
    except Exception: 
        print(2, end="")
    else:
        print(7, end="")
    finally:
        print(6, end="")
    
except: print('error')
