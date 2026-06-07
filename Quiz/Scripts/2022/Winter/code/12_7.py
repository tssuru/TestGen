try:
    
    try:
        print(9, end="")
        print(int(8/3), end="")
        print(5, end="")
    except Exception: 
        print(9, end="")
    except ZeroDivisionError: 
        print(7, end="")
    else:
        print(8, end="")
    finally:
        print(2, end="")
    
except: print('error')
