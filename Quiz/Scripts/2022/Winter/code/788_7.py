try:
    
    try:
        print(7, end="")
        print(int("c5"), end="")
        print(3, end="")
    except BaseException: 
        print(4, end="")
    except Exception: 
        print(7, end="")
    else:
        print(1, end="")
    finally:
        print(0, end="")
    
except: print('error')
