try:
    
    try:
        print(6, end="")
        print(3!=7, end="")
        print(2, end="")
    except ZeroDivisionError: 
        print(9, end="")
    except Exception: 
        print(8, end="")
    else:
        print(7, end="")
    finally:
        print(0, end="")
    
except: print('error')
