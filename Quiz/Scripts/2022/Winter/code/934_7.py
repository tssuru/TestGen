try:
    
    try:
        print(3, end="")
        print(4>5, end="")
        print(1, end="")
    except BaseException: 
        print(0, end="")
    except Exception: 
        print(7, end="")
    else:
        print(2, end="")
    finally:
        print(5, end="")
    
except: print('error')
