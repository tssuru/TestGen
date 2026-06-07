try:
    
    try:
        print(9, end="")
        print(int("3"), end="")
        print(5, end="")
    except BaseException: 
        print(1, end="")
    except ValueError: 
        print(7, end="")
    else:
        print(6, end="")
    finally:
        print(2, end="")
    
except: print('error')
