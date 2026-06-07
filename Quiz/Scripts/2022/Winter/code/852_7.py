try:
    
    try:
        print(4, end="")
        print(int(5//0), end="")
        print(7, end="")
    except BaseException: 
        print(8, end="")
    except TypeError: 
        print(4, end="")
    else:
        print(6, end="")
    finally:
        print(3, end="")
    
except: print('error')
