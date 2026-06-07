try:
    
    try:
        print(5, end="")
        print(int(6//0), end="")
        print(4, end="")
    except ValueError: 
        print(1, end="")
    except Exception: 
        print(7, end="")
    else:
        print(0, end="")
    finally:
        print(3, end="")
    
except: print('error')
