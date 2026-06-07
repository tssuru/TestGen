try:
    
    try:
        print(6, end="")
        print(int(5%2), end="")
        print(3, end="")
    except Exception: 
        print(2, end="")
    except TypeError: 
        print(7, end="")
    else:
        print(1, end="")
    finally:
        print(4, end="")
    
except: print('error')
