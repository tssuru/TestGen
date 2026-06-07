try:
    
    try:
        print(1, end="")
        print(int("a8"), end="")
        print(9, end="")
    except BaseException: 
        print(0, end="")
    except TypeError: 
        print(3, end="")
    else:
        print(4, end="")
    finally:
        print(6, end="")
    
except: print('error')
