try:
    
    try:
        print(5, end="")
        print(int("a2"), end="")
        print(3, end="")
    except BaseException: 
        print(9, end="")
    except TypeError: 
        print(6, end="")
    else:
        print(7, end="")
    finally:
        print(8, end="")
    
except: print('error')
