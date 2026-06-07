try:
    
    try:
        print(8, end="")
        print(int(2%0.0), end="")
        print(3, end="")
    except TypeError: 
        print(4, end="")
    except Exception: 
        print(9, end="")
    else:
        print(5, end="")
    finally:
        print(0, end="")
    
except: print('error')
