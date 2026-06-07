try:
    
    try:
        print(5, end="")
        print(4<9, end="")
        print(2, end="")
    except TypeError: 
        print(8, end="")
    except BaseException: 
        print(2, end="")
    else:
        print(3, end="")
    finally:
        print(0, end="")
    
except: print('error')
