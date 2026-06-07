try:
    
    try:
        print(7, end="")
        print(int("a8"), end="")
        print(1, end="")
    except BaseException: 
        print(9, end="")
    except TypeError: 
        print(6, end="")
    else:
        print(7, end="")
    finally:
        print(3, end="")
    
except: print('error')
