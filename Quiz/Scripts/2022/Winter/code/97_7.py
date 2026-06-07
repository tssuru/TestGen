try:
    
    try:
        print(8, end="")
        print(3>4, end="")
        print(5, end="")
    except BaseException: 
        print(0, end="")
    except Exception: 
        print(4, end="")
    else:
        print(6, end="")
    finally:
        print(1, end="")
    
except: print('error')
