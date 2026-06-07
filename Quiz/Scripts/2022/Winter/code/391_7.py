try:
    
    try:
        print(7, end="")
        print(int(1//3), end="")
        print(2, end="")
    except Exception: 
        print(5, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(8, end="")
    finally:
        print(4, end="")
    
except: print('error')
