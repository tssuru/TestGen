try:
    
    try:
        print(1, end="")
        print(int(0//2), end="")
        print(3, end="")
    except Exception: 
        print(9, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(7, end="")
    finally:
        print(2, end="")
    
except: print('error')
