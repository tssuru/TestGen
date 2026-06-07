try:
    
    try:
        print(4, end="")
        print(int(1/2), end="")
        print(6, end="")
    except Exception: 
        print(7, end="")
    except BaseException: 
        print(9, end="")
    else:
        print(8, end="")
    finally:
        print(3, end="")
    
except: print('error')
