try:
    
    try:
        print(1, end="")
        print(int(8//0), end="")
        print(6, end="")
    except BaseException: 
        print(7, end="")
    except Exception: 
        print(0, end="")
    else:
        print(4, end="")
    finally:
        print(5, end="")
    
except: print('error')
