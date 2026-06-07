try:
    
    try:
        print(4, end="")
        print(int("5"), end="")
        print(8, end="")
    except TypeError: 
        print(6, end="")
    except Exception: 
        print(3, end="")
    else:
        print(9, end="")
    finally:
        print(2, end="")
    
except: print('error')
