try:
    
    try:
        print(1, end="")
        print(int(6%1), end="")
        print(8, end="")
    except TypeError: 
        print(4, end="")
    except BaseException: 
        print(5, end="")
    else:
        print(7, end="")
    finally:
        print(6, end="")
    
except: print('error')
