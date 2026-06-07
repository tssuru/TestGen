try:
    
    try:
        print(2, end="")
        print(int(6%2), end="")
        print(3, end="")
    except Exception: 
        print(5, end="")
    except ValueError: 
        print(8, end="")
    else:
        print(7, end="")
    finally:
        print(2, end="")
    
except: print('error')
