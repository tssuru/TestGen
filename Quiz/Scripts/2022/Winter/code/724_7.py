try:
    
    try:
        print(5, end="")
        print(int(3/1), end="")
        print(6, end="")
    except Exception: 
        print(1, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(2, end="")
    finally:
        print(9, end="")
    
except: print('error')
