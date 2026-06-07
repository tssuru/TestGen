try:
    
    try:
        print(9, end="")
        print(6>8, end="")
        print(7, end="")
    except BaseException: 
        print(9, end="")
    except ValueError: 
        print(8, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
