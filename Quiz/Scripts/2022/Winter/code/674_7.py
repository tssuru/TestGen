try:
    
    try:
        print(0, end="")
        print(int(7/0.0), end="")
        print(9, end="")
    except ZeroDivisionError: 
        print(3, end="")
    except Exception: 
        print(2, end="")
    else:
        print(1, end="")
    finally:
        print(5, end="")
    
except: print('error')
