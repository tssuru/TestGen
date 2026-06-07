try:
    
    try:
        print(3, end="")
        print(int(8/0), end="")
        print(1, end="")
    except TypeError: 
        print(9, end="")
    except Exception: 
        print(4, end="")
    else:
        print(5, end="")
    finally:
        print(1, end="")
    
except: print('error')
