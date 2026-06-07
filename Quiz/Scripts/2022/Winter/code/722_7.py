try:
    
    try:
        print(1, end="")
        print(8==2, end="")
        print(0, end="")
    except BaseException: 
        print(9, end="")
    except TypeError: 
        print(4, end="")
    else:
        print(5, end="")
    finally:
        print(1, end="")
    
except: print('error')
