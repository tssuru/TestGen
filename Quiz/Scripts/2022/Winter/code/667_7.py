try:
    
    try:
        print(3, end="")
        print(int("5"), end="")
        print(1, end="")
    except ValueError: 
        print(0, end="")
    except TypeError: 
        print(6, end="")
    else:
        print(2, end="")
    finally:
        print(9, end="")
    
except: print('error')
