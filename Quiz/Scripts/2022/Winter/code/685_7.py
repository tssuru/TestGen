try:
    
    try:
        print(7, end="")
        print(int("d2"), end="")
        print(1, end="")
    except Exception: 
        print(6, end="")
    except TypeError: 
        print(3, end="")
    else:
        print(4, end="")
    finally:
        print(7, end="")
    
except: print('error')
