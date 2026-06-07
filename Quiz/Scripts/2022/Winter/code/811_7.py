try:
    
    try:
        print(4, end="")
        print(int("2"), end="")
        print(1, end="")
    except TypeError: 
        print(5, end="")
    except BaseException: 
        print(7, end="")
    else:
        print(8, end="")
    finally:
        print(3, end="")
    
except: print('error')
