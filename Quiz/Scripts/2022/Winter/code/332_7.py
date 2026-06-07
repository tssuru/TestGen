try:
    
    try:
        print(3, end="")
        print(7<=4, end="")
        print(5, end="")
    except TypeError: 
        print(6, end="")
    except BaseException: 
        print(3, end="")
    else:
        print(2, end="")
    finally:
        print(1, end="")
    
except: print('error')
