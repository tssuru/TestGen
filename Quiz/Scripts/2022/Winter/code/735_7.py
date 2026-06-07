try:
    
    try:
        print(2, end="")
        print(9<=1, end="")
        print(6, end="")
    except ValueError: 
        print(9, end="")
    except BaseException: 
        print(8, end="")
    else:
        print(7, end="")
    finally:
        print(3, end="")
    
except: print('error')
