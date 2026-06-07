try:
    
    try:
        print(4, end="")
        print(int("b1"), end="")
        print(6, end="")
    except ValueError: 
        print(7, end="")
    except TypeError: 
        print(4, end="")
    else:
        print(6, end="")
    finally:
        print(1, end="")
    
except: print('error')
