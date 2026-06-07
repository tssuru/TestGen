try:
    
    try:
        print(9, end="")
        print(int(2//3), end="")
        print(1, end="")
    except Exception: 
        print(3, end="")
    except ValueError: 
        print(0, end="")
    else:
        print(5, end="")
    finally:
        print(7, end="")
    
except: print('error')
