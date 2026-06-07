try:
    
    try:
        print(7, end="")
        print(int("c4"), end="")
        print(1, end="")
    except Exception: 
        print(2, end="")
    except ValueError: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(0, end="")
    
except: print('error')
