try:
    
    try:
        print(5, end="")
        print(int(4/0.0), end="")
        print(1, end="")
    except Exception: 
        print(2, end="")
    except BaseException: 
        print(9, end="")
    else:
        print(3, end="")
    finally:
        print(6, end="")
    
except: print('error')
