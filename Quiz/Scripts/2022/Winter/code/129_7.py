try:
    
    try:
        print(3, end="")
        print(int(7//2), end="")
        print(9, end="")
    except Exception: 
        print(4, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(2, end="")
    finally:
        print(8, end="")
    
except: print('error')
