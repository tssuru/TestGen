try:
    
    try:
        print(2, end="")
        print(int("b3"), end="")
        print(5, end="")
    except BaseException: 
        print(8, end="")
    except TypeError: 
        print(6, end="")
    else:
        print(4, end="")
    finally:
        print(0, end="")
    
except: print('error')
