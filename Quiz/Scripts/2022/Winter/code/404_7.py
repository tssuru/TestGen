try:
    
    try:
        print(5, end="")
        print(int(3%2), end="")
        print(2, end="")
    except ZeroDivisionError: 
        print(0, end="")
    except Exception: 
        print(9, end="")
    else:
        print(7, end="")
    finally:
        print(6, end="")
    
except: print('error')
