try:
    
    try:
        print(3, end="")
        print(int("0"), end="")
        print(1, end="")
    except TypeError: 
        print(4, end="")
    except Exception: 
        print(2, end="")
    else:
        print(9, end="")
    finally:
        print(4, end="")
    
except: print('error')
