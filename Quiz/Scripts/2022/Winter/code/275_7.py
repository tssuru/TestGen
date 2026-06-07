try:
    
    try:
        print(3, end="")
        print(8>=9, end="")
        print(6, end="")
    except TypeError: 
        print(8, end="")
    except BaseException: 
        print(2, end="")
    else:
        print(5, end="")
    finally:
        print(3, end="")
    
except: print('error')
