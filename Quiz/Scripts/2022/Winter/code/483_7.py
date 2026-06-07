try:
    
    try:
        print(9, end="")
        print(int("a6"), end="")
        print(4, end="")
    except BaseException: 
        print(7, end="")
    except ValueError: 
        print(3, end="")
    else:
        print(1, end="")
    finally:
        print(1, end="")
    
except: print('error')
