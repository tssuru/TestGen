try:
    
    try:
        print(7, end="")
        print(int("b6"), end="")
        print(1, end="")
    except ValueError: 
        print(0, end="")
    except TypeError: 
        print(4, end="")
    else:
        print(2, end="")
    finally:
        print(4, end="")
    
except: print('error')
