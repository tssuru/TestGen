try:
    
    try:
        print(9, end="")
        print(0>6, end="")
        print(8, end="")
    except BaseException: 
        print(1, end="")
    except Exception: 
        print(4, end="")
    else:
        print(2, end="")
    finally:
        print(3, end="")
    
except: print('error')
