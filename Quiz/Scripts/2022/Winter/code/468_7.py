try:
    
    try:
        print(6, end="")
        print(2!=5, end="")
        print(9, end="")
    except BaseException: 
        print(3, end="")
    except TypeError: 
        print(0, end="")
    else:
        print(6, end="")
    finally:
        print(8, end="")
    
except: print('error')
