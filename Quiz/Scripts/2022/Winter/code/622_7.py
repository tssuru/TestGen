try:
    
    try:
        print(7, end="")
        print(int("c9"), end="")
        print(0, end="")
    except ValueError: 
        print(2, end="")
    except TypeError: 
        print(5, end="")
    else:
        print(1, end="")
    finally:
        print(8, end="")
    
except: print('error')
