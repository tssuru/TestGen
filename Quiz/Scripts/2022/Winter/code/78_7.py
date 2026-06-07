try:
    
    try:
        print(5, end="")
        print(int("6"), end="")
        print(3, end="")
    except Exception: 
        print(1, end="")
    except TypeError: 
        print(4, end="")
    else:
        print(7, end="")
    finally:
        print(9, end="")
    
except: print('error')
