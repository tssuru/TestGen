try:
    
    try:
        print(0, end="")
        print(int(8//0.0), end="")
        print(4, end="")
    except BaseException: 
        print(6, end="")
    except Exception: 
        print(2, end="")
    else:
        print(4, end="")
    finally:
        print(1, end="")
    
except: print('error')
