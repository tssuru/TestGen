try:
    
    try:
        print(3, end="")
        print(int("5"), end="")
        print(2, end="")
    except TypeError: 
        print(1, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(0, end="")
    finally:
        print(9, end="")
    
except: print('error')
