try:
    
    try:
        print(0, end="")
        print(1<7, end="")
        print(8, end="")
    except BaseException: 
        print(6, end="")
    except TypeError: 
        print(3, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
