try:
    
    try:
        print(2, end="")
        print(int("3"), end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(8, end="")
    except Exception: 
        print(9, end="")
    else:
        print(6, end="")
    finally:
        print(1, end="")
    
except: print('error')
