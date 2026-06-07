try:
    
    try:
        print(9, end="")
        print(int("2"), end="")
        print(5, end="")
    except Exception: 
        print(0, end="")
    except TypeError: 
        print(8, end="")
    else:
        print(4, end="")
    finally:
        print(7, end="")
    
except: print('error')
