try:
    
    try:
        print(8, end="")
        print(int(0%0), end="")
        print(7, end="")
    except ValueError: 
        print(9, end="")
    except Exception: 
        print(5, end="")
    else:
        print(2, end="")
    finally:
        print(1, end="")
    
except: print('error')
