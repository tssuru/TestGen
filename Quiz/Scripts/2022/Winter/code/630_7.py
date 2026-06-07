try:
    
    try:
        print(0, end="")
        print(int("d4"), end="")
        print(9, end="")
    except Exception: 
        print(6, end="")
    except BaseException: 
        print(8, end="")
    else:
        print(1, end="")
    finally:
        print(7, end="")
    
except: print('error')
