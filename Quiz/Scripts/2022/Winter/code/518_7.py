try:
    
    try:
        print(0, end="")
        print(int(8/3), end="")
        print(2, end="")
    except ValueError: 
        print(5, end="")
    except BaseException: 
        print(9, end="")
    else:
        print(0, end="")
    finally:
        print(3, end="")
    
except: print('error')
