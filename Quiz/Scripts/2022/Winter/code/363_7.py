try:
    
    try:
        print(4, end="")
        print(int("a3"), end="")
        print(7, end="")
    except BaseException: 
        print(1, end="")
    except Exception: 
        print(5, end="")
    else:
        print(6, end="")
    finally:
        print(7, end="")
    
except: print('error')
