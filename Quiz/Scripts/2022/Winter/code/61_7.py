try:
    
    try:
        print(1, end="")
        print(int(3%3), end="")
        print(2, end="")
    except TypeError: 
        print(8, end="")
    except BaseException: 
        print(0, end="")
    else:
        print(4, end="")
    finally:
        print(6, end="")
    
except: print('error')
