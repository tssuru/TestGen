try:
    
    try:
        print(3, end="")
        print(int(7/2), end="")
        print(6, end="")
    except Exception: 
        print(4, end="")
    except ZeroDivisionError: 
        print(3, end="")
    else:
        print(1, end="")
    finally:
        print(8, end="")
    
except: print('error')
