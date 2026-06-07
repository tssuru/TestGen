try:
    
    try:
        print(8, end="")
        print(int("7"), end="")
        print(2, end="")
    except Exception: 
        print(2, end="")
    except TypeError: 
        print(0, end="")
    else:
        print(1, end="")
    finally:
        print(6, end="")
    
except: print('error')
