try:
    
    try:
        print(9, end="")
        print(int("1"), end="")
        print(6, end="")
    except Exception: 
        print(3, end="")
    except TypeError: 
        print(2, end="")
    else:
        print(8, end="")
    finally:
        print(4, end="")
    
except: print('error')
