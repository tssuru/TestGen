try:
    
    try:
        print(6, end="")
        print(int(5/0.0), end="")
        print(0, end="")
    except Exception: 
        print(4, end="")
    except ZeroDivisionError: 
        print(2, end="")
    else:
        print(9, end="")
    finally:
        print(4, end="")
    
except: print('error')
