try:
    
    try:
        print(8, end="")
        print(int(3%0.0), end="")
        print(5, end="")
    except Exception: 
        print(6, end="")
    except ZeroDivisionError: 
        print(1, end="")
    else:
        print(4, end="")
    finally:
        print(0, end="")
    
except: print('error')
