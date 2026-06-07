try:
    
    try:
        print(7, end="")
        print(int("9"), end="")
        print(8, end="")
    except BaseException: 
        print(3, end="")
    except TypeError: 
        print(6, end="")
    else:
        print(0, end="")
    finally:
        print(4, end="")
    
except: print('error')
