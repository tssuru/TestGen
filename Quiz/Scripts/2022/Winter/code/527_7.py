try:
    
    try:
        print(7, end="")
        print(int(9%3), end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(4, end="")
    except Exception: 
        print(5, end="")
    else:
        print(1, end="")
    finally:
        print(3, end="")
    
except: print('error')
