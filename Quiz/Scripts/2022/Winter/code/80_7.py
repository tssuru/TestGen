try:
    
    try:
        print(7, end="")
        print(int("c9"), end="")
        print(2, end="")
    except Exception: 
        print(6, end="")
    except TypeError: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(5, end="")
    
except: print('error')
