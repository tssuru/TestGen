try:
    
    try:
        print(6, end="")
        print(int("7"), end="")
        print(3, end="")
    except BaseException: 
        print(2, end="")
    except ValueError: 
        print(9, end="")
    else:
        print(8, end="")
    finally:
        print(9, end="")
    
except: print('error')
