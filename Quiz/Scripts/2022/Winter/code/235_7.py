try:
    
    try:
        print(8, end="")
        print(int("5"), end="")
        print(3, end="")
    except ValueError: 
        print(7, end="")
    except TypeError: 
        print(6, end="")
    else:
        print(5, end="")
    finally:
        print(4, end="")
    
except: print('error')
