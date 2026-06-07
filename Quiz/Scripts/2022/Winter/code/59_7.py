try:
    
    try:
        print(8, end="")
        print(int("a5"), end="")
        print(2, end="")
    except ValueError: 
        print(6, end="")
    except BaseException: 
        print(5, end="")
    else:
        print(9, end="")
    finally:
        print(6, end="")
    
except: print('error')
