try:
    
    try:
        print(6, end="")
        print(int(2//2), end="")
        print(9, end="")
    except BaseException: 
        print(2, end="")
    except Exception: 
        print(1, end="")
    else:
        print(7, end="")
    finally:
        print(3, end="")
    
except: print('error')
