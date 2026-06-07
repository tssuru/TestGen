try:
    
    try:
        print(0, end="")
        print(int("3"), end="")
        print(2, end="")
    except BaseException: 
        print(5, end="")
    except Exception: 
        print(0, end="")
    else:
        print(9, end="")
    finally:
        print(6, end="")
    
except: print('error')
