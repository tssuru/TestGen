try:
    
    try:
        print(6, end="")
        print(int("1"), end="")
        print(2, end="")
    except ZeroDivisionError: 
        print(4, end="")
    except Exception: 
        print(9, end="")
    else:
        print(0, end="")
    finally:
        print(8, end="")
    
except: print('error')
