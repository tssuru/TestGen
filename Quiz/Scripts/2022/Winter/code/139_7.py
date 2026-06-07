try:
    
    try:
        print(9, end="")
        print(int("0"), end="")
        print(1, end="")
    except ValueError: 
        print(4, end="")
    except BaseException: 
        print(9, end="")
    else:
        print(6, end="")
    finally:
        print(7, end="")
    
except: print('error')
