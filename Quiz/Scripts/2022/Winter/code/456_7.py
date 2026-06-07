try:
    
    try:
        print(7, end="")
        print(5<4, end="")
        print(9, end="")
    except Exception: 
        print(1, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(3, end="")
    finally:
        print(1, end="")
    
except: print('error')
