try:
    
    try:
        print(9, end="")
        print(6<1, end="")
        print(2, end="")
    except BaseException: 
        print(7, end="")
    except Exception: 
        print(0, end="")
    else:
        print(3, end="")
    finally:
        print(9, end="")
    
except: print('error')
