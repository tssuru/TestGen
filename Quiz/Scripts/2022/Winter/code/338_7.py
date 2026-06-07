try:
    
    try:
        print(9, end="")
        print(int("b8"), end="")
        print(6, end="")
    except TypeError: 
        print(7, end="")
    except ValueError: 
        print(3, end="")
    else:
        print(0, end="")
    finally:
        print(4, end="")
    
except: print('error')
