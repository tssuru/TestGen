try:
    
    try:
        print(8, end="")
        print(int(4%3), end="")
        print(1, end="")
    except Exception: 
        print(2, end="")
    except ZeroDivisionError: 
        print(9, end="")
    else:
        print(0, end="")
    finally:
        print(3, end="")
    
except: print('error')
