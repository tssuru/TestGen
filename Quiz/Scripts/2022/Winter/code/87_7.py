try:
    
    try:
        print(3, end="")
        print(int("2"), end="")
        print(7, end="")
    except ValueError: 
        print(9, end="")
    except TypeError: 
        print(4, end="")
    else:
        print(8, end="")
    finally:
        print(5, end="")
    
except: print('error')
