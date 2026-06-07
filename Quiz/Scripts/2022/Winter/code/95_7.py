try:
    
    try:
        print(8, end="")
        print(int(6//0), end="")
        print(8, end="")
    except Exception: 
        print(7, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(1, end="")
    finally:
        print(2, end="")
    
except: print('error')
