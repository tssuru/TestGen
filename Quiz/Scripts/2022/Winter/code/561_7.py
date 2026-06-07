try:
    
    try:
        print(3, end="")
        print(int("d5"), end="")
        print(2, end="")
    except ValueError: 
        print(8, end="")
    except BaseException: 
        print(1, end="")
    else:
        print(4, end="")
    finally:
        print(7, end="")
    
except: print('error')
