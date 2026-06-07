try:
    
    try:
        print(8, end="")
        print(9<0, end="")
        print(5, end="")
    except BaseException: 
        print(0, end="")
    except Exception: 
        print(5, end="")
    else:
        print(3, end="")
    finally:
        print(4, end="")
    
except: print('error')
