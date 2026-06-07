try:
    
    try:
        print(6, end="")
        print(int(9/0.0), end="")
        print(9, end="")
    except Exception: 
        print(4, end="")
    except ValueError: 
        print(5, end="")
    else:
        print(2, end="")
    finally:
        print(1, end="")
    
except: print('error')
