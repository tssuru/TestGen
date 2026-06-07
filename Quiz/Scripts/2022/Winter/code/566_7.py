try:
    
    try:
        print(0, end="")
        print(int(6//0.0), end="")
        print(3, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except Exception: 
        print(2, end="")
    else:
        print(1, end="")
    finally:
        print(4, end="")
    
except: print('error')
