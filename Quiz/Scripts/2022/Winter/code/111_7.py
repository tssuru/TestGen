try:
    
    try:
        print(8, end="")
        print(3<=0, end="")
        print(1, end="")
    except ZeroDivisionError: 
        print(4, end="")
    except Exception: 
        print(6, end="")
    else:
        print(7, end="")
    finally:
        print(0, end="")
    
except: print('error')
