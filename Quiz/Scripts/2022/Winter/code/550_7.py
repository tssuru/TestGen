try:
    
    try:
        print(3, end="")
        print(1>0, end="")
        print(9, end="")
    except ValueError: 
        print(5, end="")
    except BaseException: 
        print(2, end="")
    else:
        print(4, end="")
    finally:
        print(0, end="")
    
except: print('error')
