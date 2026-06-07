try:
    
    try:
        print(0, end="")
        print(int("a2"), end="")
        print(6, end="")
    except ValueError: 
        print(5, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(8, end="")
    finally:
        print(7, end="")
    
except: print('error')
