try:
    
    try:
        print(3, end="")
        print(8>5, end="")
        print(7, end="")
    except Exception: 
        print(2, end="")
    except BaseException: 
        print(1, end="")
    else:
        print(4, end="")
    finally:
        print(0, end="")
    
except: print('error')
