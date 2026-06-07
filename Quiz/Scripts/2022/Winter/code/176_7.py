try:
    
    try:
        print(5, end="")
        print(int("0"), end="")
        print(2, end="")
    except ValueError: 
        print(1, end="")
    except BaseException: 
        print(3, end="")
    else:
        print(2, end="")
    finally:
        print(8, end="")
    
except: print('error')
