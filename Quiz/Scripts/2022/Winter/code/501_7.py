try:
    
    try:
        print(6, end="")
        print(int(2//0.0), end="")
        print(9, end="")
    except ValueError: 
        print(8, end="")
    except Exception: 
        print(7, end="")
    else:
        print(4, end="")
    finally:
        print(3, end="")
    
except: print('error')
