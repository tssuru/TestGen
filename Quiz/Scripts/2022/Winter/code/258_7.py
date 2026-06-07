try:
    
    try:
        print(3, end="")
        print(4>2, end="")
        print(3, end="")
    except TypeError: 
        print(1, end="")
    except BaseException: 
        print(6, end="")
    else:
        print(2, end="")
    finally:
        print(5, end="")
    
except: print('error')
