try:
    
    try:
        print(8, end="")
        print(int(2/0.0), end="")
        print(4, end="")
    except ZeroDivisionError: 
        print(8, end="")
    except Exception: 
        print(6, end="")
    else:
        print(7, end="")
    finally:
        print(5, end="")
    
except: print('error')
