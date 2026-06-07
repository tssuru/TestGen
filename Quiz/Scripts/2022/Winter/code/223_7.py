try:
    
    try:
        print(7, end="")
        print(int("c3"), end="")
        print(9, end="")
    except TypeError: 
        print(0, end="")
    except Exception: 
        print(4, end="")
    else:
        print(2, end="")
    finally:
        print(5, end="")
    
except: print('error')
