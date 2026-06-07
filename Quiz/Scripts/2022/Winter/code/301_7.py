try:
    
    try:
        print(4, end="")
        print(int("c3"), end="")
        print(8, end="")
    except BaseException: 
        print(5, end="")
    except Exception: 
        print(7, end="")
    else:
        print(9, end="")
    finally:
        print(1, end="")
    
except: print('error')
