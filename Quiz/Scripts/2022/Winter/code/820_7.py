try:
    
    try:
        print(6, end="")
        print(int(3/1), end="")
        print(7, end="")
    except BaseException: 
        print(1, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
