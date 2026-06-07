try:
    
    try:
        print(3, end="")
        print(int("c4"), end="")
        print(0, end="")
    except BaseException: 
        print(1, end="")
    except Exception: 
        print(7, end="")
    else:
        print(5, end="")
    finally:
        print(0, end="")
    
except: print('error')
