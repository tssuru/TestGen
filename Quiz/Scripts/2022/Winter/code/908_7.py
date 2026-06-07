try:
    
    try:
        print(9, end="")
        print(int("6"), end="")
        print(4, end="")
    except BaseException: 
        print(5, end="")
    except Exception: 
        print(2, end="")
    else:
        print(0, end="")
    finally:
        print(1, end="")
    
except: print('error')
