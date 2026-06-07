try:
    
    try:
        print(9, end="")
        print(int("6"), end="")
        print(0, end="")
    except TypeError: 
        print(9, end="")
    except Exception: 
        print(7, end="")
    else:
        print(8, end="")
    finally:
        print(0, end="")
    
except: print('error')
