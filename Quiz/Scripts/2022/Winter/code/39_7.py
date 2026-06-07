try:
    
    try:
        print(6, end="")
        print(int("2"), end="")
        print(4, end="")
    except Exception: 
        print(9, end="")
    except BaseException: 
        print(9, end="")
    else:
        print(1, end="")
    finally:
        print(7, end="")
    
except: print('error')
