try:
    
    try:
        print(7, end="")
        print(int("b8"), end="")
        print(0, end="")
    except Exception: 
        print(1, end="")
    except BaseException: 
        print(5, end="")
    else:
        print(4, end="")
    finally:
        print(9, end="")
    
except: print('error')
