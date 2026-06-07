try:
    
    try:
        print(4, end="")
        print(int("9"), end="")
        print(5, end="")
    except TypeError: 
        print(1, end="")
    except BaseException: 
        print(0, end="")
    else:
        print(2, end="")
    finally:
        print(6, end="")
    
except: print('error')
