try:
    
    try:
        print(8, end="")
        print(int("b4"), end="")
        print(3, end="")
    except BaseException: 
        print(1, end="")
    except TypeError: 
        print(2, end="")
    else:
        print(9, end="")
    finally:
        print(2, end="")
    
except: print('error')
