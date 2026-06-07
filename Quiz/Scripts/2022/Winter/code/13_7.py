try:
    
    try:
        print(5, end="")
        print(int(0//0), end="")
        print(3, end="")
    except TypeError: 
        print(6, end="")
    except Exception: 
        print(4, end="")
    else:
        print(1, end="")
    finally:
        print(5, end="")
    
except: print('error')
