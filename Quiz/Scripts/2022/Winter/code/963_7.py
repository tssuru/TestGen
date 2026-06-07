try:
    
    try:
        print(5, end="")
        print(int("8"), end="")
        print(4, end="")
    except BaseException: 
        print(1, end="")
    except Exception: 
        print(6, end="")
    else:
        print(3, end="")
    finally:
        print(3, end="")
    
except: print('error')
