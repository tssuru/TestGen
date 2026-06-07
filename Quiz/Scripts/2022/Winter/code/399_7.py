try:
    
    try:
        print(8, end="")
        print(int(4/0), end="")
        print(0, end="")
    except BaseException: 
        print(1, end="")
    except TypeError: 
        print(2, end="")
    else:
        print(7, end="")
    finally:
        print(3, end="")
    
except: print('error')
