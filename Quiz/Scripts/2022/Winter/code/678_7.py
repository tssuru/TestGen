try:
    
    try:
        print(1, end="")
        print(int(5/0), end="")
        print(1, end="")
    except Exception: 
        print(0, end="")
    except BaseException: 
        print(6, end="")
    else:
        print(7, end="")
    finally:
        print(4, end="")
    
except: print('error')
