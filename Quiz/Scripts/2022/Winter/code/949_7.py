try:
    
    try:
        print(3, end="")
        print(int("6"), end="")
        print(8, end="")
    except TypeError: 
        print(2, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(2, end="")
    finally:
        print(5, end="")
    
except: print('error')
