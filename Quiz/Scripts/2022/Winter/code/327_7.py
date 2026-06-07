try:
    
    try:
        print(3, end="")
        print(int("8"), end="")
        print(6, end="")
    except BaseException: 
        print(5, end="")
    except ValueError: 
        print(9, end="")
    else:
        print(1, end="")
    finally:
        print(7, end="")
    
except: print('error')
