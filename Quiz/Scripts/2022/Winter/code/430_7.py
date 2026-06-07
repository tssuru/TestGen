try:
    
    try:
        print(5, end="")
        print(int(4%0), end="")
        print(9, end="")
    except Exception: 
        print(1, end="")
    except BaseException: 
        print(7, end="")
    else:
        print(8, end="")
    finally:
        print(0, end="")
    
except: print('error')
