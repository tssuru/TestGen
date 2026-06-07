try:
    
    try:
        print(6, end="")
        print(4<=1, end="")
        print(2, end="")
    except Exception: 
        print(8, end="")
    except ZeroDivisionError: 
        print(7, end="")
    else:
        print(9, end="")
    finally:
        print(2, end="")
    
except: print('error')
