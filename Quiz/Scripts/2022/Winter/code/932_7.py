try:
    
    try:
        print(6, end="")
        print(int(3%1), end="")
        print(2, end="")
    except Exception: 
        print(8, end="")
    except BaseException: 
        print(3, end="")
    else:
        print(6, end="")
    finally:
        print(9, end="")
    
except: print('error')
