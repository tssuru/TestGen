try:
    
    try:
        print(1, end="")
        print(int(7%2), end="")
        print(0, end="")
    except TypeError: 
        print(5, end="")
    except BaseException: 
        print(2, end="")
    else:
        print(3, end="")
    finally:
        print(8, end="")
    
except: print('error')
