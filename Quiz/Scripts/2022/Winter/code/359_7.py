try:
    
    try:
        print(9, end="")
        print(int(0%0), end="")
        print(2, end="")
    except Exception: 
        print(1, end="")
    except TypeError: 
        print(0, end="")
    else:
        print(6, end="")
    finally:
        print(1, end="")
    
except: print('error')
