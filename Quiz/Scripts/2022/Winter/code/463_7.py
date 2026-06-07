try:
    
    try:
        print(4, end="")
        print(int("c0"), end="")
        print(3, end="")
    except BaseException: 
        print(2, end="")
    except ValueError: 
        print(5, end="")
    else:
        print(1, end="")
    finally:
        print(4, end="")
    
except: print('error')
