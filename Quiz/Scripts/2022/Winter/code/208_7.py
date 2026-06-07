try:
    
    try:
        print(4, end="")
        print(5>=5, end="")
        print(7, end="")
    except ValueError: 
        print(9, end="")
    except BaseException: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(1, end="")
    
except: print('error')
