try:
    
    try:
        print(2, end="")
        print(7<8, end="")
        print(6, end="")
    except Exception: 
        print(3, end="")
    except BaseException: 
        print(6, end="")
    else:
        print(1, end="")
    finally:
        print(9, end="")
    
except: print('error')
