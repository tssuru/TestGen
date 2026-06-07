try:
    
    try:
        print(5, end="")
        print(1>=6, end="")
        print(9, end="")
    except BaseException: 
        print(7, end="")
    except ValueError: 
        print(1, end="")
    else:
        print(5, end="")
    finally:
        print(8, end="")
    
except: print('error')
