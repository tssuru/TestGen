try:
    
    try:
        print(6, end="")
        print(0>=6, end="")
        print(3, end="")
    except BaseException: 
        print(1, end="")
    except Exception: 
        print(2, end="")
    else:
        print(5, end="")
    finally:
        print(0, end="")
    
except: print('error')
