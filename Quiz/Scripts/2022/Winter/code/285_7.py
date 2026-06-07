try:
    
    try:
        print(8, end="")
        print(int("7"), end="")
        print(1, end="")
    except TypeError: 
        print(8, end="")
    except ValueError: 
        print(5, end="")
    else:
        print(9, end="")
    finally:
        print(7, end="")
    
except: print('error')
