try:
    
    try:
        print(5, end="")
        print(int(6//2), end="")
        print(3, end="")
    except Exception: 
        print(1, end="")
    except TypeError: 
        print(9, end="")
    else:
        print(4, end="")
    finally:
        print(0, end="")
    
except: print('error')
