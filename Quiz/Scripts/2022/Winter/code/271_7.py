try:
    
    try:
        print(0, end="")
        print(int(8//0.0), end="")
        print(9, end="")
    except TypeError: 
        print(4, end="")
    except Exception: 
        print(7, end="")
    else:
        print(3, end="")
    finally:
        print(5, end="")
    
except: print('error')
