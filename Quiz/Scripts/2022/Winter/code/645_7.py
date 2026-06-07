try:
    
    try:
        print(6, end="")
        print(int(9%0), end="")
        print(7, end="")
    except ValueError: 
        print(9, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(6, end="")
    finally:
        print(0, end="")
    
except: print('error')
