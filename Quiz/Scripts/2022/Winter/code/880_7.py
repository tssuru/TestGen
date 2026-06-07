try:
    
    try:
        print(3, end="")
        print(7!=1, end="")
        print(4, end="")
    except ZeroDivisionError: 
        print(9, end="")
    except Exception: 
        print(6, end="")
    else:
        print(0, end="")
    finally:
        print(8, end="")
    
except: print('error')
