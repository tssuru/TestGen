try:
    
    try:
        print(1, end="")
        print(int("c9"), end="")
        print(0, end="")
    except BaseException: 
        print(8, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(9, end="")
    finally:
        print(7, end="")
    
except: print('error')
