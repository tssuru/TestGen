try:
    
    try:
        print(7, end="")
        print(9==9, end="")
        print(8, end="")
    except BaseException: 
        print(2, end="")
    except TypeError: 
        print(1, end="")
    else:
        print(0, end="")
    finally:
        print(5, end="")
    
except: print('error')
