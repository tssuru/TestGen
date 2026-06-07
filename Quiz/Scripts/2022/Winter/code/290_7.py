try:
    
    try:
        print(4, end="")
        print(6!=0, end="")
        print(9, end="")
    except TypeError: 
        print(5, end="")
    except BaseException: 
        print(1, end="")
    else:
        print(7, end="")
    finally:
        print(8, end="")
    
except: print('error')
