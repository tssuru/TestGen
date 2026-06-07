try:
    
    try:
        print(3, end="")
        print(int("a9"), end="")
        print(0, end="")
    except TypeError: 
        print(7, end="")
    except Exception: 
        print(5, end="")
    else:
        print(1, end="")
    finally:
        print(4, end="")
    
except: print('error')
