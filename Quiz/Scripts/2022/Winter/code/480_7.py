try:
    
    try:
        print(3, end="")
        print(int("b6"), end="")
        print(1, end="")
    except BaseException: 
        print(2, end="")
    except TypeError: 
        print(7, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
