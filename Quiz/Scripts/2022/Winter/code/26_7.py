try:
    
    try:
        print(3, end="")
        print(int("a8"), end="")
        print(4, end="")
    except TypeError: 
        print(0, end="")
    except ValueError: 
        print(2, end="")
    else:
        print(8, end="")
    finally:
        print(9, end="")
    
except: print('error')
