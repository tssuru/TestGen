try:
    
    try:
        print(5, end="")
        print(int(1/1), end="")
        print(7, end="")
    except Exception: 
        print(6, end="")
    except TypeError: 
        print(2, end="")
    else:
        print(4, end="")
    finally:
        print(9, end="")
    
except: print('error')
