try:
    
    try:
        print(7, end="")
        print(int("4"), end="")
        print(0, end="")
    except Exception: 
        print(7, end="")
    except TypeError: 
        print(5, end="")
    else:
        print(3, end="")
    finally:
        print(9, end="")
    
except: print('error')
