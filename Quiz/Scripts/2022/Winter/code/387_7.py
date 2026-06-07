try:
    
    try:
        print(6, end="")
        print(int(5//0), end="")
        print(4, end="")
    except ValueError: 
        print(9, end="")
    except Exception: 
        print(2, end="")
    else:
        print(8, end="")
    finally:
        print(1, end="")
    
except: print('error')
