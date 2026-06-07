try:
    
    try:
        print(6, end="")
        print(int("d0"), end="")
        print(1, end="")
    except ValueError: 
        print(7, end="")
    except BaseException: 
        print(8, end="")
    else:
        print(3, end="")
    finally:
        print(2, end="")
    
except: print('error')
