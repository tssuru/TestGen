try:
    
    try:
        print(8, end="")
        print(5>=5, end="")
        print(1, end="")
    except ValueError: 
        print(4, end="")
    except BaseException: 
        print(3, end="")
    else:
        print(6, end="")
    finally:
        print(2, end="")
    
except: print('error')
