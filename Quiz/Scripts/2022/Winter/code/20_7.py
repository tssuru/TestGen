try:
    
    try:
        print(2, end="")
        print(int("b1"), end="")
        print(5, end="")
    except ValueError: 
        print(9, end="")
    except TypeError: 
        print(0, end="")
    else:
        print(3, end="")
    finally:
        print(4, end="")
    
except: print('error')
