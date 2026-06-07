try:
    
    try:
        print(1, end="")
        print(int(5%0.0), end="")
        print(4, end="")
    except Exception: 
        print(7, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(0, end="")
    finally:
        print(3, end="")
    
except: print('error')
