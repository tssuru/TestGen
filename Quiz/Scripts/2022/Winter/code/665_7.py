try:
    
    try:
        print(7, end="")
        print(int("c8"), end="")
        print(4, end="")
    except Exception: 
        print(6, end="")
    except ValueError: 
        print(5, end="")
    else:
        print(3, end="")
    finally:
        print(2, end="")
    
except: print('error')
