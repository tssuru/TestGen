try:
    
    try:
        print(8, end="")
        print(int("c4"), end="")
        print(7, end="")
    except ValueError: 
        print(6, end="")
    except Exception: 
        print(5, end="")
    else:
        print(3, end="")
    finally:
        print(9, end="")
    
except: print('error')
