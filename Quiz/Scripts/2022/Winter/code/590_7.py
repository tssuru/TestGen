try:
    
    try:
        print(0, end="")
        print(int("5"), end="")
        print(4, end="")
    except ValueError: 
        print(1, end="")
    except BaseException: 
        print(3, end="")
    else:
        print(7, end="")
    finally:
        print(2, end="")
    
except: print('error')
