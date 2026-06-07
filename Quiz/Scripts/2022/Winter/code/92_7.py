try:
    
    try:
        print(4, end="")
        print(0==2, end="")
        print(9, end="")
    except BaseException: 
        print(2, end="")
    except Exception: 
        print(9, end="")
    else:
        print(3, end="")
    finally:
        print(4, end="")
    
except: print('error')
