try:
    
    try:
        print(9, end="")
        print(int(1%0.0), end="")
        print(3, end="")
    except Exception: 
        print(7, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(2, end="")
    finally:
        print(8, end="")
    
except: print('error')
