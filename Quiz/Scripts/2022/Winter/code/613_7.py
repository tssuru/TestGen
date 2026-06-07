try:
    
    try:
        print(8, end="")
        print(int("b7"), end="")
        print(6, end="")
    except TypeError: 
        print(5, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(1, end="")
    finally:
        print(9, end="")
    
except: print('error')
