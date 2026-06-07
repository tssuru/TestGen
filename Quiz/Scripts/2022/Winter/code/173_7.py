try:
    
    try:
        print(7, end="")
        print(int(9//1), end="")
        print(3, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except Exception: 
        print(4, end="")
    else:
        print(1, end="")
    finally:
        print(3, end="")
    
except: print('error')
