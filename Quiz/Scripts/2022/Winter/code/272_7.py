try:
    
    try:
        print(1, end="")
        print(int("2"), end="")
        print(6, end="")
    except BaseException: 
        print(4, end="")
    except ValueError: 
        print(8, end="")
    else:
        print(9, end="")
    finally:
        print(3, end="")
    
except: print('error')
