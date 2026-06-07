try:
    
    try:
        print(5, end="")
        print(int("1"), end="")
        print(4, end="")
    except TypeError: 
        print(9, end="")
    except BaseException: 
        print(5, end="")
    else:
        print(3, end="")
    finally:
        print(6, end="")
    
except: print('error')
