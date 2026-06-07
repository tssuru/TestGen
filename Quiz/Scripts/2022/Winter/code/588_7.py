try:
    
    try:
        print(8, end="")
        print(int(1/3), end="")
        print(2, end="")
    except TypeError: 
        print(3, end="")
    except BaseException: 
        print(8, end="")
    else:
        print(9, end="")
    finally:
        print(6, end="")
    
except: print('error')
