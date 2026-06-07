try:
    
    try:
        print(4, end="")
        print(1>3, end="")
        print(9, end="")
    except BaseException: 
        print(6, end="")
    except ValueError: 
        print(7, end="")
    else:
        print(0, end="")
    finally:
        print(3, end="")
    
except: print('error')
