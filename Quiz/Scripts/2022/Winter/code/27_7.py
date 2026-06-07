try:
    
    try:
        print(3, end="")
        print(int("1"), end="")
        print(5, end="")
    except BaseException: 
        print(2, end="")
    except Exception: 
        print(7, end="")
    else:
        print(4, end="")
    finally:
        print(0, end="")
    
except: print('error')
