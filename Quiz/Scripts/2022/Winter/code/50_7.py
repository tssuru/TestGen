try:
    
    try:
        print(6, end="")
        print(int("8"), end="")
        print(9, end="")
    except Exception: 
        print(4, end="")
    except BaseException: 
        print(2, end="")
    else:
        print(3, end="")
    finally:
        print(7, end="")
    
except: print('error')
