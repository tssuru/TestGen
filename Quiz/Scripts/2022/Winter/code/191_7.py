try:
    
    try:
        print(9, end="")
        print(int(3//3), end="")
        print(0, end="")
    except BaseException: 
        print(4, end="")
    except ValueError: 
        print(8, end="")
    else:
        print(5, end="")
    finally:
        print(1, end="")
    
except: print('error')
