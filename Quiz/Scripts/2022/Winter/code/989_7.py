try:
    
    try:
        print(3, end="")
        print(int(8//0), end="")
        print(6, end="")
    except ZeroDivisionError: 
        print(7, end="")
    except Exception: 
        print(8, end="")
    else:
        print(9, end="")
    finally:
        print(2, end="")
    
except: print('error')
