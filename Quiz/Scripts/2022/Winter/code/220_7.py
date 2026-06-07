try:
    
    try:
        print(0, end="")
        print(int(2%2), end="")
        print(5, end="")
    except TypeError: 
        print(8, end="")
    except BaseException: 
        print(7, end="")
    else:
        print(6, end="")
    finally:
        print(9, end="")
    
except: print('error')
