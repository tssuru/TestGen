try:
    
    try:
        print(9, end="")
        print(0<6, end="")
        print(4, end="")
    except BaseException: 
        print(7, end="")
    except TypeError: 
        print(6, end="")
    else:
        print(2, end="")
    finally:
        print(3, end="")
    
except: print('error')
