try:
    
    try:
        print(7, end="")
        print(int(1//1), end="")
        print(5, end="")
    except TypeError: 
        print(8, end="")
    except BaseException: 
        print(0, end="")
    else:
        print(2, end="")
    finally:
        print(9, end="")
    
except: print('error')
