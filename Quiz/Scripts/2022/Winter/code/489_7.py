try:
    
    try:
        print(3, end="")
        print(int(2/0.0), end="")
        print(4, end="")
    except TypeError: 
        print(1, end="")
    except Exception: 
        print(4, end="")
    else:
        print(2, end="")
    finally:
        print(6, end="")
    
except: print('error')
