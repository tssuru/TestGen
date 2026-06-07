try:
    
    try:
        print(3, end="")
        print(int(8//1), end="")
        print(2, end="")
    except Exception: 
        print(0, end="")
    except ZeroDivisionError: 
        print(4, end="")
    else:
        print(1, end="")
    finally:
        print(7, end="")
    
except: print('error')
