try:
    
    try:
        print(2, end="")
        print(int("d4"), end="")
        print(7, end="")
    except BaseException: 
        print(8, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(9, end="")
    finally:
        print(3, end="")
    
except: print('error')
