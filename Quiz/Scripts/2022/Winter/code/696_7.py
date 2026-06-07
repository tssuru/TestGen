try:
    
    try:
        print(8, end="")
        print(int(0/2), end="")
        print(7, end="")
    except TypeError: 
        print(1, end="")
    except Exception: 
        print(4, end="")
    else:
        print(5, end="")
    finally:
        print(6, end="")
    
except: print('error')
