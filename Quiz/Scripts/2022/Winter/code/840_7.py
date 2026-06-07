try:
    
    try:
        print(8, end="")
        print(7>=0, end="")
        print(6, end="")
    except TypeError: 
        print(3, end="")
    except BaseException: 
        print(5, end="")
    else:
        print(0, end="")
    finally:
        print(1, end="")
    
except: print('error')
