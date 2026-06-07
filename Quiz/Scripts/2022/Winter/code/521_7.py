try:
    
    try:
        print(1, end="")
        print(int(5//0), end="")
        print(4, end="")
    except Exception: 
        print(6, end="")
    except TypeError: 
        print(8, end="")
    else:
        print(2, end="")
    finally:
        print(3, end="")
    
except: print('error')
