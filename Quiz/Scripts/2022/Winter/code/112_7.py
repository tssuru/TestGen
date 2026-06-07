try:
    
    try:
        print(9, end="")
        print(int(2/0), end="")
        print(5, end="")
    except Exception: 
        print(1, end="")
    except BaseException: 
        print(0, end="")
    else:
        print(8, end="")
    finally:
        print(5, end="")
    
except: print('error')
