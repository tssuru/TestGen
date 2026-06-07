try:
    
    try:
        print(3, end="")
        print(int(0/0.0), end="")
        print(6, end="")
    except TypeError: 
        print(7, end="")
    except Exception: 
        print(8, end="")
    else:
        print(2, end="")
    finally:
        print(4, end="")
    
except: print('error')
