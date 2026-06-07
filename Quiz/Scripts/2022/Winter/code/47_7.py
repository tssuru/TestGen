try:
    
    try:
        print(8, end="")
        print(int(3/2), end="")
        print(2, end="")
    except Exception: 
        print(5, end="")
    except BaseException: 
        print(7, end="")
    else:
        print(4, end="")
    finally:
        print(9, end="")
    
except: print('error')
