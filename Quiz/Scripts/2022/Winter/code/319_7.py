try:
    
    try:
        print(1, end="")
        print(int(9/0.0), end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(6, end="")
    except Exception: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(7, end="")
    
except: print('error')
