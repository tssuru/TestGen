try:
    
    try:
        print(6, end="")
        print(int("c1"), end="")
        print(5, end="")
    except ValueError: 
        print(9, end="")
    except Exception: 
        print(2, end="")
    else:
        print(4, end="")
    finally:
        print(7, end="")
    
except: print('error')
