try:
    
    try:
        print(5, end="")
        print(int(2//2), end="")
        print(8, end="")
    except Exception: 
        print(5, end="")
    except BaseException: 
        print(3, end="")
    else:
        print(0, end="")
    finally:
        print(1, end="")
    
except: print('error')
