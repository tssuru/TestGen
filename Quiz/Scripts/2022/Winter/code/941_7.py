try:
    
    try:
        print(1, end="")
        print(int("b4"), end="")
        print(0, end="")
    except TypeError: 
        print(8, end="")
    except BaseException: 
        print(3, end="")
    else:
        print(6, end="")
    finally:
        print(2, end="")
    
except: print('error')
