try:
    
    try:
        print(5, end="")
        print(int(3//0.0), end="")
        print(4, end="")
    except ZeroDivisionError: 
        print(2, end="")
    except Exception: 
        print(6, end="")
    else:
        print(7, end="")
    finally:
        print(0, end="")
    
except: print('error')
