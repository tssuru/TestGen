try:
    
    try:
        print(6, end="")
        print(int("7"), end="")
        print(5, end="")
    except BaseException: 
        print(3, end="")
    except ValueError: 
        print(1, end="")
    else:
        print(7, end="")
    finally:
        print(9, end="")
    
except: print('error')
