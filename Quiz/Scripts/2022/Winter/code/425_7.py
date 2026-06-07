try:
    
    try:
        print(6, end="")
        print(int(2%0.0), end="")
        print(8, end="")
    except Exception: 
        print(1, end="")
    except ZeroDivisionError: 
        print(7, end="")
    else:
        print(6, end="")
    finally:
        print(0, end="")
    
except: print('error')
