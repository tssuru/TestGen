try:
    
    try:
        print(0, end="")
        print(int(3/0.0), end="")
        print(9, end="")
    except ZeroDivisionError: 
        print(6, end="")
    except Exception: 
        print(1, end="")
    else:
        print(7, end="")
    finally:
        print(4, end="")
    
except: print('error')
