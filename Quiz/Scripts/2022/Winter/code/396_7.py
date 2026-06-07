try:
    
    try:
        print(0, end="")
        print(int("5"), end="")
        print(7, end="")
    except BaseException: 
        print(8, end="")
    except ValueError: 
        print(2, end="")
    else:
        print(4, end="")
    finally:
        print(7, end="")
    
except: print('error')
