try:
    
    try:
        print(9, end="")
        print(int("7"), end="")
        print(1, end="")
    except BaseException: 
        print(0, end="")
    except Exception: 
        print(3, end="")
    else:
        print(6, end="")
    finally:
        print(2, end="")
    
except: print('error')
