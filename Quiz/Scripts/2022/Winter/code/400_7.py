try:
    
    try:
        print(8, end="")
        print(5>=2, end="")
        print(1, end="")
    except BaseException: 
        print(6, end="")
    except ValueError: 
        print(9, end="")
    else:
        print(0, end="")
    finally:
        print(4, end="")
    
except: print('error')
