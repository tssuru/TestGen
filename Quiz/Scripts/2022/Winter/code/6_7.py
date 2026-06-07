try:
    
    try:
        print(0, end="")
        print(int(4/1), end="")
        print(6, end="")
    except BaseException: 
        print(7, end="")
    except TypeError: 
        print(5, end="")
    else:
        print(9, end="")
    finally:
        print(7, end="")
    
except: print('error')
