try:
    
    try:
        print(5, end="")
        print(int("1"), end="")
        print(4, end="")
    except ZeroDivisionError: 
        print(3, end="")
    except Exception: 
        print(6, end="")
    else:
        print(5, end="")
    finally:
        print(1, end="")
    
except: print('error')
