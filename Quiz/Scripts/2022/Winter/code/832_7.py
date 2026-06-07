try:
    
    try:
        print(6, end="")
        print(int("3"), end="")
        print(2, end="")
    except TypeError: 
        print(0, end="")
    except Exception: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(6, end="")
    
except: print('error')
