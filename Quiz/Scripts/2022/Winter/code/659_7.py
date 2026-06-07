try:
    
    try:
        print(5, end="")
        print(int("a6"), end="")
        print(9, end="")
    except Exception: 
        print(0, end="")
    except BaseException: 
        print(1, end="")
    else:
        print(0, end="")
    finally:
        print(7, end="")
    
except: print('error')
