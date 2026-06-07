try:
    
    try:
        print(8, end="")
        print(int("c1"), end="")
        print(6, end="")
    except ValueError: 
        print(7, end="")
    except TypeError: 
        print(5, end="")
    else:
        print(2, end="")
    finally:
        print(4, end="")
    
except: print('error')
