try:
    
    try:
        print(3, end="")
        print(int("b4"), end="")
        print(6, end="")
    except ValueError: 
        print(8, end="")
    except TypeError: 
        print(5, end="")
    else:
        print(9, end="")
    finally:
        print(7, end="")
    
except: print('error')
