try:
    
    try:
        print(9, end="")
        print(int(5%0.0), end="")
        print(4, end="")
    except Exception: 
        print(7, end="")
    except BaseException: 
        print(7, end="")
    else:
        print(8, end="")
    finally:
        print(6, end="")
    
except: print('error')
