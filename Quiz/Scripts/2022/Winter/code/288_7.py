try:
    
    try:
        print(5, end="")
        print(int("3"), end="")
        print(2, end="")
    except TypeError: 
        print(6, end="")
    except Exception: 
        print(5, end="")
    else:
        print(0, end="")
    finally:
        print(8, end="")
    
except: print('error')
