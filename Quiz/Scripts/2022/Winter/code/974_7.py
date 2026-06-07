try:
    
    try:
        print(3, end="")
        print(int("c2"), end="")
        print(6, end="")
    except Exception: 
        print(8, end="")
    except ValueError: 
        print(5, end="")
    else:
        print(1, end="")
    finally:
        print(4, end="")
    
except: print('error')
