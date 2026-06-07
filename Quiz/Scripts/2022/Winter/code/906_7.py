try:
    
    try:
        print(3, end="")
        print(int(0%0), end="")
        print(4, end="")
    except Exception: 
        print(2, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(7, end="")
    finally:
        print(8, end="")
    
except: print('error')
