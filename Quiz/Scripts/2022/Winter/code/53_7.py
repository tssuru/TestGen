try:
    
    try:
        print(6, end="")
        print(int("c8"), end="")
        print(2, end="")
    except BaseException: 
        print(1, end="")
    except TypeError: 
        print(4, end="")
    else:
        print(9, end="")
    finally:
        print(3, end="")
    
except: print('error')
