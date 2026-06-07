try:
    
    try:
        print(9, end="")
        print(int("b3"), end="")
        print(4, end="")
    except ValueError: 
        print(8, end="")
    except BaseException: 
        print(1, end="")
    else:
        print(7, end="")
    finally:
        print(2, end="")
    
except: print('error')
