try:
    
    try:
        print(9, end="")
        print(int("8"), end="")
        print(1, end="")
    except BaseException: 
        print(6, end="")
    except TypeError: 
        print(0, end="")
    else:
        print(4, end="")
    finally:
        print(5, end="")
    
except: print('error')
