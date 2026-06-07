try:
    
    try:
        print(5, end="")
        print(int("a0"), end="")
        print(1, end="")
    except BaseException: 
        print(4, end="")
    except Exception: 
        print(2, end="")
    else:
        print(7, end="")
    finally:
        print(9, end="")
    
except: print('error')
