try:
    
    try:
        print(3, end="")
        print(int(6//0.0), end="")
        print(8, end="")
    except BaseException: 
        print(5, end="")
    except Exception: 
        print(1, end="")
    else:
        print(9, end="")
    finally:
        print(5, end="")
    
except: print('error')
