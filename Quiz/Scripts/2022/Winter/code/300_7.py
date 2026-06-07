try:
    
    try:
        print(8, end="")
        print(int("b3"), end="")
        print(7, end="")
    except ValueError: 
        print(6, end="")
    except TypeError: 
        print(9, end="")
    else:
        print(5, end="")
    finally:
        print(2, end="")
    
except: print('error')
