try:
    
    try:
        print(3, end="")
        print(int("d1"), end="")
        print(5, end="")
    except TypeError: 
        print(4, end="")
    except BaseException: 
        print(7, end="")
    else:
        print(0, end="")
    finally:
        print(8, end="")
    
except: print('error')
