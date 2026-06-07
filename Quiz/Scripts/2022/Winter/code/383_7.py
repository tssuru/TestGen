try:
    
    try:
        print(5, end="")
        print(int("c6"), end="")
        print(3, end="")
    except ValueError: 
        print(0, end="")
    except BaseException: 
        print(9, end="")
    else:
        print(2, end="")
    finally:
        print(8, end="")
    
except: print('error')
