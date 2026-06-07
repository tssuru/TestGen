try:
    
    try:
        print(8, end="")
        print(int("4"), end="")
        print(9, end="")
    except ValueError: 
        print(5, end="")
    except BaseException: 
        print(0, end="")
    else:
        print(3, end="")
    finally:
        print(7, end="")
    
except: print('error')
