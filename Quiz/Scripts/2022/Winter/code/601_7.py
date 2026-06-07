try:
    
    try:
        print(1, end="")
        print(int(3%0), end="")
        print(4, end="")
    except BaseException: 
        print(6, end="")
    except TypeError: 
        print(5, end="")
    else:
        print(0, end="")
    finally:
        print(2, end="")
    
except: print('error')
