try:
    
    try:
        print(8, end="")
        print(int("a2"), end="")
        print(4, end="")
    except BaseException: 
        print(3, end="")
    except Exception: 
        print(5, end="")
    else:
        print(1, end="")
    finally:
        print(7, end="")
    
except: print('error')
