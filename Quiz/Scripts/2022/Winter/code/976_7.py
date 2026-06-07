try:
    
    try:
        print(0, end="")
        print(int("b8"), end="")
        print(6, end="")
    except TypeError: 
        print(2, end="")
    except Exception: 
        print(3, end="")
    else:
        print(5, end="")
    finally:
        print(1, end="")
    
except: print('error')
