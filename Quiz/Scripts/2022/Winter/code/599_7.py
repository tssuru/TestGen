try:
    
    try:
        print(0, end="")
        print(int(6/0.0), end="")
        print(7, end="")
    except BaseException: 
        print(9, end="")
    except ValueError: 
        print(9, end="")
    else:
        print(3, end="")
    finally:
        print(4, end="")
    
except: print('error')
