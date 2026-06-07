try:
    
    try:
        print(9, end="")
        print(int(5//1), end="")
        print(3, end="")
    except Exception: 
        print(7, end="")
    except TypeError: 
        print(8, end="")
    else:
        print(6, end="")
    finally:
        print(1, end="")
    
except: print('error')
