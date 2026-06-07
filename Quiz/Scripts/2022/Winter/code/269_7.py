try:
    
    try:
        print(9, end="")
        print(int(5//0.0), end="")
        print(7, end="")
    except Exception: 
        print(4, end="")
    except ValueError: 
        print(9, end="")
    else:
        print(3, end="")
    finally:
        print(1, end="")
    
except: print('error')
