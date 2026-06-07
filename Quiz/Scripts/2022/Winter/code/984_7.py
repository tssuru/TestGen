try:
    
    try:
        print(7, end="")
        print(int("d2"), end="")
        print(1, end="")
    except BaseException: 
        print(3, end="")
    except TypeError: 
        print(8, end="")
    else:
        print(4, end="")
    finally:
        print(0, end="")
    
except: print('error')
