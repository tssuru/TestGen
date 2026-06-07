try:
    
    try:
        print(1, end="")
        print(int("9"), end="")
        print(0, end="")
    except TypeError: 
        print(3, end="")
    except BaseException: 
        print(2, end="")
    else:
        print(4, end="")
    finally:
        print(5, end="")
    
except: print('error')
