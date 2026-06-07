try:
    
    try:
        print(0, end="")
        print(int(5%2), end="")
        print(0, end="")
    except BaseException: 
        print(3, end="")
    except ValueError: 
        print(7, end="")
    else:
        print(2, end="")
    finally:
        print(4, end="")
    
except: print('error')
