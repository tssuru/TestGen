try:
    
    try:
        print(2, end="")
        print(int("4"), end="")
        print(8, end="")
    except TypeError: 
        print(7, end="")
    except BaseException: 
        print(0, end="")
    else:
        print(3, end="")
    finally:
        print(9, end="")
    
except: print('error')
