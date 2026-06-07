try:
    
    try:
        print(7, end="")
        print(int("1"), end="")
        print(2, end="")
    except Exception: 
        print(0, end="")
    except TypeError: 
        print(4, end="")
    else:
        print(6, end="")
    finally:
        print(0, end="")
    
except: print('error')
