try:
    
    try:
        print(9, end="")
        print(int("b7"), end="")
        print(6, end="")
    except BaseException: 
        print(4, end="")
    except Exception: 
        print(6, end="")
    else:
        print(2, end="")
    finally:
        print(3, end="")
    
except: print('error')
