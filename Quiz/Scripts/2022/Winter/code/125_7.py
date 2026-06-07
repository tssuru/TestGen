try:
    
    try:
        print(3, end="")
        print(int(9%0), end="")
        print(3, end="")
    except Exception: 
        print(7, end="")
    except ValueError: 
        print(0, end="")
    else:
        print(4, end="")
    finally:
        print(1, end="")
    
except: print('error')
