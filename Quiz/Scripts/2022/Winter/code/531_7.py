try:
    
    try:
        print(4, end="")
        print(int("c1"), end="")
        print(2, end="")
    except ValueError: 
        print(6, end="")
    except TypeError: 
        print(3, end="")
    else:
        print(7, end="")
    finally:
        print(5, end="")
    
except: print('error')
