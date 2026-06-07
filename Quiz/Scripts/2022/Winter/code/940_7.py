try:
    
    try:
        print(0, end="")
        print(int(9//0.0), end="")
        print(8, end="")
    except Exception: 
        print(1, end="")
    except ZeroDivisionError: 
        print(3, end="")
    else:
        print(2, end="")
    finally:
        print(7, end="")
    
except: print('error')
