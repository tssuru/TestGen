try:
    
    try:
        print(2, end="")
        print(int(3%0.0), end="")
        print(7, end="")
    except ValueError: 
        print(8, end="")
    except Exception: 
        print(4, end="")
    else:
        print(1, end="")
    finally:
        print(5, end="")
    
except: print('error')
