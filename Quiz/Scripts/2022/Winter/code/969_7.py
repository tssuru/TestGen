try:
    
    try:
        print(1, end="")
        print(int("6"), end="")
        print(2, end="")
    except ValueError: 
        print(3, end="")
    except BaseException: 
        print(6, end="")
    else:
        print(2, end="")
    finally:
        print(1, end="")
    
except: print('error')
