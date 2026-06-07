try:
    
    try:
        print(2, end="")
        print(int(5//0.0), end="")
        print(3, end="")
    except ValueError: 
        print(8, end="")
    except Exception: 
        print(1, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
