try:
    
    try:
        print(3, end="")
        print(int("0"), end="")
        print(4, end="")
    except Exception: 
        print(5, end="")
    except TypeError: 
        print(7, end="")
    else:
        print(6, end="")
    finally:
        print(2, end="")
    
except: print('error')
