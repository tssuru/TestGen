try:
    
    try:
        print(3, end="")
        print(int(4/0), end="")
        print(1, end="")
    except ValueError: 
        print(8, end="")
    except BaseException: 
        print(9, end="")
    else:
        print(1, end="")
    finally:
        print(0, end="")
    
except: print('error')
