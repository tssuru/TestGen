try:
    
    try:
        print(7, end="")
        print(6!=7, end="")
        print(8, end="")
    except BaseException: 
        print(3, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(1, end="")
    finally:
        print(5, end="")
    
except: print('error')
