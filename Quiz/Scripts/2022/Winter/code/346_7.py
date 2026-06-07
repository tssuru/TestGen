try:
    
    try:
        print(4, end="")
        print(int("3"), end="")
        print(5, end="")
    except BaseException: 
        print(8, end="")
    except Exception: 
        print(7, end="")
    else:
        print(9, end="")
    finally:
        print(7, end="")
    
except: print('error')
