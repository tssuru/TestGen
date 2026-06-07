try:
    
    try:
        print(8, end="")
        print(int("d2"), end="")
        print(9, end="")
    except ValueError: 
        print(6, end="")
    except BaseException: 
        print(1, end="")
    else:
        print(1, end="")
    finally:
        print(0, end="")
    
except: print('error')
