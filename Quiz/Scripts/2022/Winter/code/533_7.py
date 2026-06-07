try:
    
    try:
        print(1, end="")
        print(int("8"), end="")
        print(2, end="")
    except TypeError: 
        print(9, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(7, end="")
    finally:
        print(7, end="")
    
except: print('error')
