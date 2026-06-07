try:
    
    try:
        print(7, end="")
        print(int(3//1), end="")
        print(8, end="")
    except ZeroDivisionError: 
        print(1, end="")
    except Exception: 
        print(0, end="")
    else:
        print(6, end="")
    finally:
        print(9, end="")
    
except: print('error')
