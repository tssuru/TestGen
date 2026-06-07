try:
    
    try:
        print(3, end="")
        print(int(1%2), end="")
        print(5, end="")
    except Exception: 
        print(1, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(9, end="")
    finally:
        print(3, end="")
    
except: print('error')
