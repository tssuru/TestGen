try:
    
    try:
        print(1, end="")
        print(int(6/1), end="")
        print(3, end="")
    except Exception: 
        print(9, end="")
    except ValueError: 
        print(5, end="")
    else:
        print(2, end="")
    finally:
        print(7, end="")
    
except: print('error')
