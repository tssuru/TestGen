try:
    
    try:
        print(3, end="")
        print(int(8%3), end="")
        print(4, end="")
    except BaseException: 
        print(7, end="")
    except Exception: 
        print(1, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
