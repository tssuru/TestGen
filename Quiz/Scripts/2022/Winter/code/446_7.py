try:
    
    try:
        print(4, end="")
        print(int(8//3), end="")
        print(7, end="")
    except TypeError: 
        print(1, end="")
    except Exception: 
        print(0, end="")
    else:
        print(2, end="")
    finally:
        print(3, end="")
    
except: print('error')
