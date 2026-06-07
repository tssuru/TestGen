try:
    
    try:
        print(7, end="")
        print(int(5/0), end="")
        print(9, end="")
    except ValueError: 
        print(3, end="")
    except BaseException: 
        print(0, end="")
    else:
        print(8, end="")
    finally:
        print(4, end="")
    
except: print('error')
