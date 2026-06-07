try:
    
    try:
        print(8, end="")
        print(int(6/3), end="")
        print(2, end="")
    except Exception: 
        print(3, end="")
    except ZeroDivisionError: 
        print(9, end="")
    else:
        print(7, end="")
    finally:
        print(4, end="")
    
except: print('error')
