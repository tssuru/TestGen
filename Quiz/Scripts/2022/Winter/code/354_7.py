try:
    
    try:
        print(4, end="")
        print(5<5, end="")
        print(7, end="")
    except Exception: 
        print(9, end="")
    except ZeroDivisionError: 
        print(1, end="")
    else:
        print(3, end="")
    finally:
        print(2, end="")
    
except: print('error')
