try:
    
    try:
        print(2, end="")
        print(int(4%2), end="")
        print(9, end="")
    except Exception: 
        print(0, end="")
    except BaseException: 
        print(7, end="")
    else:
        print(6, end="")
    finally:
        print(5, end="")
    
except: print('error')
