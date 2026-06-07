try:
    
    try:
        print(7, end="")
        print(int(4%2), end="")
        print(9, end="")
    except TypeError: 
        print(5, end="")
    except Exception: 
        print(2, end="")
    else:
        print(1, end="")
    finally:
        print(3, end="")
    
except: print('error')
