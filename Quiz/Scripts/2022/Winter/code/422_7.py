try:
    
    try:
        print(7, end="")
        print(int(3/1), end="")
        print(6, end="")
    except Exception: 
        print(6, end="")
    except TypeError: 
        print(2, end="")
    else:
        print(4, end="")
    finally:
        print(8, end="")
    
except: print('error')
