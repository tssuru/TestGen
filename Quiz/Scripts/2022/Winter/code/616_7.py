try:
    
    try:
        print(4, end="")
        print(0>1, end="")
        print(5, end="")
    except BaseException: 
        print(6, end="")
    except Exception: 
        print(8, end="")
    else:
        print(7, end="")
    finally:
        print(4, end="")
    
except: print('error')
