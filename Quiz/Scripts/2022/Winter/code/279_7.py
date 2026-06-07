try:
    
    try:
        print(6, end="")
        print(int("d4"), end="")
        print(9, end="")
    except TypeError: 
        print(3, end="")
    except Exception: 
        print(8, end="")
    else:
        print(5, end="")
    finally:
        print(3, end="")
    
except: print('error')
