try:
    
    try:
        print(0, end="")
        print(int("7"), end="")
        print(4, end="")
    except BaseException: 
        print(2, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(9, end="")
    finally:
        print(8, end="")
    
except: print('error')
