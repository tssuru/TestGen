try:
    
    try:
        print(1, end="")
        print(int(8%3), end="")
        print(4, end="")
    except BaseException: 
        print(6, end="")
    except Exception: 
        print(2, end="")
    else:
        print(8, end="")
    finally:
        print(7, end="")
    
except: print('error')
