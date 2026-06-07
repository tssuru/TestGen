try:
    
    try:
        print(9, end="")
        print(int(4/0.0), end="")
        print(7, end="")
    except TypeError: 
        print(9, end="")
    except BaseException: 
        print(8, end="")
    else:
        print(2, end="")
    finally:
        print(5, end="")
    
except: print('error')
