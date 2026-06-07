try:
    
    try:
        print(6, end="")
        print(int("7"), end="")
        print(0, end="")
    except Exception: 
        print(2, end="")
    except TypeError: 
        print(8, end="")
    else:
        print(1, end="")
    finally:
        print(4, end="")
    
except: print('error')
