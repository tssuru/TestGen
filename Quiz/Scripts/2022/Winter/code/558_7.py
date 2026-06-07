try:
    
    try:
        print(7, end="")
        print(int("d6"), end="")
        print(4, end="")
    except TypeError: 
        print(3, end="")
    except Exception: 
        print(8, end="")
    else:
        print(1, end="")
    finally:
        print(7, end="")
    
except: print('error')
