try:
    
    try:
        print(9, end="")
        print(8<6, end="")
        print(1, end="")
    except BaseException: 
        print(4, end="")
    except TypeError: 
        print(5, end="")
    else:
        print(7, end="")
    finally:
        print(6, end="")
    
except: print('error')
