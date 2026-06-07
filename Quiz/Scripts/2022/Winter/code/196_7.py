try:
    
    try:
        print(1, end="")
        print(3>4, end="")
        print(0, end="")
    except TypeError: 
        print(4, end="")
    except BaseException: 
        print(6, end="")
    else:
        print(8, end="")
    finally:
        print(1, end="")
    
except: print('error')
