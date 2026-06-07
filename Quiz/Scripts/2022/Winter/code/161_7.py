try:
    
    try:
        print(2, end="")
        print(int(0/2), end="")
        print(1, end="")
    except BaseException: 
        print(3, end="")
    except Exception: 
        print(5, end="")
    else:
        print(9, end="")
    finally:
        print(4, end="")
    
except: print('error')
