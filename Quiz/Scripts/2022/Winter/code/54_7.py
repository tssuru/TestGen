try:
    
    try:
        print(4, end="")
        print(int(6//3), end="")
        print(5, end="")
    except ValueError: 
        print(9, end="")
    except Exception: 
        print(1, end="")
    else:
        print(7, end="")
    finally:
        print(0, end="")
    
except: print('error')
