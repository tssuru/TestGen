try:
    
    try:
        print(9, end="")
        print(int("d5"), end="")
        print(2, end="")
    except BaseException: 
        print(0, end="")
    except TypeError: 
        print(6, end="")
    else:
        print(8, end="")
    finally:
        print(7, end="")
    
except: print('error')
