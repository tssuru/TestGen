try:
    
    try:
        print(5, end="")
        print(0==4, end="")
        print(1, end="")
    except ZeroDivisionError: 
        print(9, end="")
    except Exception: 
        print(3, end="")
    else:
        print(4, end="")
    finally:
        print(6, end="")
    
except: print('error')
