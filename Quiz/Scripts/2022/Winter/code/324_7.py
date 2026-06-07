try:
    
    try:
        print(6, end="")
        print(int("d2"), end="")
        print(5, end="")
    except ValueError: 
        print(9, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(8, end="")
    finally:
        print(1, end="")
    
except: print('error')
