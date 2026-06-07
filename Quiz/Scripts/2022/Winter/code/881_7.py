try:
    
    try:
        print(2, end="")
        print(int("d6"), end="")
        print(5, end="")
    except TypeError: 
        print(9, end="")
    except BaseException: 
        print(1, end="")
    else:
        print(8, end="")
    finally:
        print(3, end="")
    
except: print('error')
