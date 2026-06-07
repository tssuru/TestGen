try:
    
    try:
        print(3, end="")
        print(int("d0"), end="")
        print(7, end="")
    except TypeError: 
        print(9, end="")
    except Exception: 
        print(1, end="")
    else:
        print(2, end="")
    finally:
        print(4, end="")
    
except: print('error')
