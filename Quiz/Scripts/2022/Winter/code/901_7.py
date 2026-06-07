try:
    
    try:
        print(5, end="")
        print(int("1"), end="")
        print(6, end="")
    except ValueError: 
        print(9, end="")
    except BaseException: 
        print(0, end="")
    else:
        print(4, end="")
    finally:
        print(2, end="")
    
except: print('error')
