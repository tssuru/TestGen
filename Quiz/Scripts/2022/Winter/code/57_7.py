try:
    
    try:
        print(7, end="")
        print(int(6//0), end="")
        print(0, end="")
    except BaseException: 
        print(5, end="")
    except TypeError: 
        print(4, end="")
    else:
        print(3, end="")
    finally:
        print(1, end="")
    
except: print('error')
