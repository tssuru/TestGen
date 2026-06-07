try:
    
    try:
        print(1, end="")
        print(int(9/0), end="")
        print(0, end="")
    except Exception: 
        print(6, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(5, end="")
    finally:
        print(8, end="")
    
except: print('error')
