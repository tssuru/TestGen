try:
    
    try:
        print(5, end="")
        print(int("d4"), end="")
        print(2, end="")
    except Exception: 
        print(1, end="")
    except BaseException: 
        print(7, end="")
    else:
        print(9, end="")
    finally:
        print(6, end="")
    
except: print('error')
