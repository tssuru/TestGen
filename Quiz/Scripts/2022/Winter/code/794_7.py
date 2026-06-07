try:
    
    try:
        print(2, end="")
        print(int(8/2), end="")
        print(3, end="")
    except ValueError: 
        print(9, end="")
    except Exception: 
        print(1, end="")
    else:
        print(7, end="")
    finally:
        print(0, end="")
    
except: print('error')
