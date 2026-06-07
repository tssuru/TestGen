try:
    
    try:
        print(8, end="")
        print(int("5"), end="")
        print(9, end="")
    except TypeError: 
        print(2, end="")
    except Exception: 
        print(3, end="")
    else:
        print(0, end="")
    finally:
        print(1, end="")
    
except: print('error')
