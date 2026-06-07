try:
    
    try:
        print(3, end="")
        print(int("7"), end="")
        print(8, end="")
    except ValueError: 
        print(1, end="")
    except BaseException: 
        print(9, end="")
    else:
        print(0, end="")
    finally:
        print(2, end="")
    
except: print('error')
