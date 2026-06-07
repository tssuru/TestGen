try:
    
    try:
        print(6, end="")
        print(int("5"), end="")
        print(9, end="")
    except Exception: 
        print(3, end="")
    except BaseException: 
        print(1, end="")
    else:
        print(0, end="")
    finally:
        print(7, end="")
    
except: print('error')
