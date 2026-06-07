try:
    
    try:
        print(1, end="")
        print(int(3/0.0), end="")
        print(6, end="")
    except BaseException: 
        print(0, end="")
    except Exception: 
        print(9, end="")
    else:
        print(8, end="")
    finally:
        print(5, end="")
    
except: print('error')
