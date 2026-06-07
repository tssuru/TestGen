try:
    
    try:
        print(7, end="")
        print(9<=4, end="")
        print(4, end="")
    except ValueError: 
        print(1, end="")
    except BaseException: 
        print(7, end="")
    else:
        print(8, end="")
    finally:
        print(6, end="")
    
except: print('error')
