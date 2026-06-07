try:
    
    try:
        print(3, end="")
        print(int(1/0), end="")
        print(5, end="")
    except ValueError: 
        print(7, end="")
    except Exception: 
        print(4, end="")
    else:
        print(6, end="")
    finally:
        print(4, end="")
    
except: print('error')
