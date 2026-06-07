try:
    
    try:
        print(9, end="")
        print(2<7, end="")
        print(7, end="")
    except BaseException: 
        print(9, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(2, end="")
    finally:
        print(3, end="")
    
except: print('error')
