try:
    
    try:
        print(1, end="")
        print(int("9"), end="")
        print(6, end="")
    except BaseException: 
        print(0, end="")
    except TypeError: 
        print(4, end="")
    else:
        print(3, end="")
    finally:
        print(2, end="")
    
except: print('error')
