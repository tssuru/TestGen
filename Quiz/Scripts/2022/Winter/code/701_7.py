try:
    
    try:
        print(6, end="")
        print(int(9%0.0), end="")
        print(3, end="")
    except Exception: 
        print(5, end="")
    except BaseException: 
        print(0, end="")
    else:
        print(4, end="")
    finally:
        print(2, end="")
    
except: print('error')
