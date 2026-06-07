try:
    
    try:
        print(6, end="")
        print(int(1%0.0), end="")
        print(7, end="")
    except Exception: 
        print(2, end="")
    except BaseException: 
        print(2, end="")
    else:
        print(9, end="")
    finally:
        print(1, end="")
    
except: print('error')
