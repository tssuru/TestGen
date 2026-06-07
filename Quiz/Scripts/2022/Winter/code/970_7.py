try:
    
    try:
        print(8, end="")
        print(int("a9"), end="")
        print(3, end="")
    except BaseException: 
        print(7, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(0, end="")
    finally:
        print(5, end="")
    
except: print('error')
