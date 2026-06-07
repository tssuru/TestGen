try:
    
    try:
        print(7, end="")
        print(int(3%0), end="")
        print(1, end="")
    except TypeError: 
        print(2, end="")
    except Exception: 
        print(7, end="")
    else:
        print(8, end="")
    finally:
        print(6, end="")
    
except: print('error')
