try:
    
    try:
        print(3, end="")
        print(9>=3, end="")
        print(4, end="")
    except BaseException: 
        print(7, end="")
    except TypeError: 
        print(2, end="")
    else:
        print(5, end="")
    finally:
        print(6, end="")
    
except: print('error')
