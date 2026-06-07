try:
    
    try:
        print(2, end="")
        print(int("7"), end="")
        print(8, end="")
    except Exception: 
        print(5, end="")
    except TypeError: 
        print(0, end="")
    else:
        print(6, end="")
    finally:
        print(9, end="")
    
except: print('error')
