try:
    
    try:
        print(2, end="")
        print(int("b4"), end="")
        print(3, end="")
    except BaseException: 
        print(2, end="")
    except Exception: 
        print(7, end="")
    else:
        print(5, end="")
    finally:
        print(8, end="")
    
except: print('error')
