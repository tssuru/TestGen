try:
    
    try:
        print(1, end="")
        print(int(4//0), end="")
        print(3, end="")
    except Exception: 
        print(0, end="")
    except ValueError: 
        print(7, end="")
    else:
        print(6, end="")
    finally:
        print(8, end="")
    
except: print('error')
