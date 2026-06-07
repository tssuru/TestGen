try:
    
    try:
        print(9, end="")
        print(6>=6, end="")
        print(7, end="")
    except TypeError: 
        print(4, end="")
    except BaseException: 
        print(2, end="")
    else:
        print(3, end="")
    finally:
        print(8, end="")
    
except: print('error')
