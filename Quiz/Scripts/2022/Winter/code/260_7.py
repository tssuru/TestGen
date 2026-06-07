try:
    
    try:
        print(1, end="")
        print(int("b2"), end="")
        print(4, end="")
    except Exception: 
        print(3, end="")
    except ValueError: 
        print(5, end="")
    else:
        print(6, end="")
    finally:
        print(7, end="")
    
except: print('error')
