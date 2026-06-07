try:
    
    try:
        print(0, end="")
        print(int("9"), end="")
        print(3, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except Exception: 
        print(1, end="")
    else:
        print(9, end="")
    finally:
        print(4, end="")
    
except: print('error')
