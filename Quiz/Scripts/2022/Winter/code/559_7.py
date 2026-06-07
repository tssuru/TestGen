try:
    
    try:
        print(2, end="")
        print(int("9"), end="")
        print(5, end="")
    except TypeError: 
        print(0, end="")
    except Exception: 
        print(3, end="")
    else:
        print(1, end="")
    finally:
        print(9, end="")
    
except: print('error')
