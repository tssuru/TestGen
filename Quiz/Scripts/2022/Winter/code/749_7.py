try:
    
    try:
        print(5, end="")
        print(int(6//3), end="")
        print(7, end="")
    except ZeroDivisionError: 
        print(2, end="")
    except Exception: 
        print(0, end="")
    else:
        print(2, end="")
    finally:
        print(9, end="")
    
except: print('error')
