try:
    
    try:
        print(7, end="")
        print(int(6//3), end="")
        print(2, end="")
    except TypeError: 
        print(0, end="")
    except Exception: 
        print(9, end="")
    else:
        print(8, end="")
    finally:
        print(9, end="")
    
except: print('error')
