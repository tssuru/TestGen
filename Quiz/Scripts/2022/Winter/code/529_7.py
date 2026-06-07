try:
    
    try:
        print(6, end="")
        print(4==8, end="")
        print(3, end="")
    except Exception: 
        print(1, end="")
    except ZeroDivisionError: 
        print(4, end="")
    else:
        print(3, end="")
    finally:
        print(0, end="")
    
except: print('error')
