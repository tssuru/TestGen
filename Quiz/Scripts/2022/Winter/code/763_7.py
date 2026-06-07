try:
    
    try:
        print(8, end="")
        print(3==1, end="")
        print(7, end="")
    except BaseException: 
        print(1, end="")
    except Exception: 
        print(0, end="")
    else:
        print(5, end="")
    finally:
        print(2, end="")
    
except: print('error')
