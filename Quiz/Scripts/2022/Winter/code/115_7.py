try:
    
    try:
        print(4, end="")
        print(int("b1"), end="")
        print(3, end="")
    except Exception: 
        print(4, end="")
    except TypeError: 
        print(5, end="")
    else:
        print(7, end="")
    finally:
        print(0, end="")
    
except: print('error')
