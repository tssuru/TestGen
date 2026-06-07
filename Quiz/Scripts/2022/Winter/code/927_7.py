try:
    
    try:
        print(0, end="")
        print(int("3"), end="")
        print(1, end="")
    except Exception: 
        print(6, end="")
    except TypeError: 
        print(8, end="")
    else:
        print(2, end="")
    finally:
        print(9, end="")
    
except: print('error')
