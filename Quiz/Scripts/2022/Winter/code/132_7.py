try:
    
    try:
        print(5, end="")
        print(int("b6"), end="")
        print(3, end="")
    except Exception: 
        print(7, end="")
    except TypeError: 
        print(6, end="")
    else:
        print(8, end="")
    finally:
        print(9, end="")
    
except: print('error')
