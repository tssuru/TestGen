try:
    
    try:
        print(2, end="")
        print(int("3"), end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(7, end="")
    except Exception: 
        print(7, end="")
    else:
        print(6, end="")
    finally:
        print(8, end="")
    
except: print('error')
