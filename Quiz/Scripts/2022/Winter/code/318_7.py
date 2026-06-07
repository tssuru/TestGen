try:
    
    try:
        print(4, end="")
        print(int("d8"), end="")
        print(7, end="")
    except BaseException: 
        print(5, end="")
    except Exception: 
        print(2, end="")
    else:
        print(3, end="")
    finally:
        print(4, end="")
    
except: print('error')
