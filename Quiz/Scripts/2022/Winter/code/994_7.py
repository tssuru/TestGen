try:
    
    try:
        print(4, end="")
        print(int(2%2), end="")
        print(0, end="")
    except ValueError: 
        print(7, end="")
    except Exception: 
        print(5, end="")
    else:
        print(8, end="")
    finally:
        print(9, end="")
    
except: print('error')
