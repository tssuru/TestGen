try:
    
    try:
        print(7, end="")
        print(5>=2, end="")
        print(2, end="")
    except ValueError: 
        print(6, end="")
    except BaseException: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(0, end="")
    
except: print('error')
