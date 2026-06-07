try:
    
    try:
        print(3, end="")
        print(int(9/1), end="")
        print(4, end="")
    except BaseException: 
        print(7, end="")
    except ValueError: 
        print(5, end="")
    else:
        print(8, end="")
    finally:
        print(4, end="")
    
except: print('error')
