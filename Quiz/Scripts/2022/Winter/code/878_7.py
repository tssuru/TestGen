try:
    
    try:
        print(3, end="")
        print(int(5/0.0), end="")
        print(9, end="")
    except BaseException: 
        print(3, end="")
    except Exception: 
        print(8, end="")
    else:
        print(2, end="")
    finally:
        print(7, end="")
    
except: print('error')
