try:
    
    try:
        print(9, end="")
        print(int(2%0.0), end="")
        print(5, end="")
    except Exception: 
        print(4, end="")
    except BaseException: 
        print(8, end="")
    else:
        print(1, end="")
    finally:
        print(4, end="")
    
except: print('error')
