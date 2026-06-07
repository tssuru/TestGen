try:
    
    try:
        print(0, end="")
        print(6<1, end="")
        print(3, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except Exception: 
        print(2, end="")
    else:
        print(4, end="")
    finally:
        print(8, end="")
    
except: print('error')
