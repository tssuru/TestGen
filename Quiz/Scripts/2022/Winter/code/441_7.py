try:
    
    try:
        print(8, end="")
        print(int("b2"), end="")
        print(6, end="")
    except Exception: 
        print(9, end="")
    except TypeError: 
        print(4, end="")
    else:
        print(1, end="")
    finally:
        print(5, end="")
    
except: print('error')
