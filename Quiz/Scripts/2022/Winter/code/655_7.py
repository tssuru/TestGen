try:
    
    try:
        print(4, end="")
        print(int("7"), end="")
        print(8, end="")
    except TypeError: 
        print(9, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(0, end="")
    finally:
        print(1, end="")
    
except: print('error')
