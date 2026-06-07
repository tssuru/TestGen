try:
    
    try:
        print(7, end="")
        print(int(7//3), end="")
        print(5, end="")
    except TypeError: 
        print(3, end="")
    except Exception: 
        print(6, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
