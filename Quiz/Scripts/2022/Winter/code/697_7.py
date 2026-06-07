try:
    
    try:
        print(7, end="")
        print(int("b3"), end="")
        print(2, end="")
    except Exception: 
        print(0, end="")
    except TypeError: 
        print(1, end="")
    else:
        print(9, end="")
    finally:
        print(4, end="")
    
except: print('error')
