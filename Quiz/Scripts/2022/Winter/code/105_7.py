try:
    
    try:
        print(9, end="")
        print(int("1"), end="")
        print(9, end="")
    except TypeError: 
        print(0, end="")
    except Exception: 
        print(4, end="")
    else:
        print(2, end="")
    finally:
        print(7, end="")
    
except: print('error')
