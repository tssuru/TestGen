try:
    
    try:
        print(3, end="")
        print(int("b8"), end="")
        print(0, end="")
    except ValueError: 
        print(2, end="")
    except TypeError: 
        print(7, end="")
    else:
        print(1, end="")
    finally:
        print(4, end="")
    
except: print('error')
