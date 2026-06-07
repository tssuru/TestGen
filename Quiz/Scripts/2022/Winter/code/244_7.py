try:
    
    try:
        print(0, end="")
        print(int(2%0), end="")
        print(7, end="")
    except BaseException: 
        print(5, end="")
    except Exception: 
        print(8, end="")
    else:
        print(3, end="")
    finally:
        print(1, end="")
    
except: print('error')
