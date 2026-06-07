try:
    
    try:
        print(8, end="")
        print(int("a8"), end="")
        print(1, end="")
    except BaseException: 
        print(5, end="")
    except ValueError: 
        print(9, end="")
    else:
        print(4, end="")
    finally:
        print(6, end="")
    
except: print('error')
