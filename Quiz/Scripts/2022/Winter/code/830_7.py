try:
    
    try:
        print(1, end="")
        print(int(8/0.0), end="")
        print(7, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except Exception: 
        print(4, end="")
    else:
        print(6, end="")
    finally:
        print(3, end="")
    
except: print('error')
