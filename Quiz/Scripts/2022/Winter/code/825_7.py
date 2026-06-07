try:
    
    try:
        print(6, end="")
        print(int("7"), end="")
        print(4, end="")
    except Exception: 
        print(0, end="")
    except BaseException: 
        print(1, end="")
    else:
        print(2, end="")
    finally:
        print(9, end="")
    
except: print('error')
