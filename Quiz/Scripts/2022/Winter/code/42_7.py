try:
    
    try:
        print(7, end="")
        print(int(6%0.0), end="")
        print(1, end="")
    except TypeError: 
        print(9, end="")
    except Exception: 
        print(3, end="")
    else:
        print(5, end="")
    finally:
        print(4, end="")
    
except: print('error')
