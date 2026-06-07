try:
    
    try:
        print(0, end="")
        print(int("d6"), end="")
        print(1, end="")
    except BaseException: 
        print(3, end="")
    except ValueError: 
        print(7, end="")
    else:
        print(9, end="")
    finally:
        print(1, end="")
    
except: print('error')
