try:
    
    try:
        print(8, end="")
        print(3!=4, end="")
        print(6, end="")
    except BaseException: 
        print(9, end="")
    except TypeError: 
        print(1, end="")
    else:
        print(8, end="")
    finally:
        print(4, end="")
    
except: print('error')
