try:
    
    try:
        print(6, end="")
        print(int("1"), end="")
        print(8, end="")
    except TypeError: 
        print(2, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(7, end="")
    finally:
        print(9, end="")
    
except: print('error')
