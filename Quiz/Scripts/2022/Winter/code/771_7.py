try:
    
    try:
        print(8, end="")
        print(int("7"), end="")
        print(6, end="")
    except BaseException: 
        print(1, end="")
    except Exception: 
        print(3, end="")
    else:
        print(4, end="")
    finally:
        print(2, end="")
    
except: print('error')
