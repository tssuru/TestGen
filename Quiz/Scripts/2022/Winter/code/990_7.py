try:
    
    try:
        print(1, end="")
        print(int("7"), end="")
        print(3, end="")
    except ValueError: 
        print(6, end="")
    except TypeError: 
        print(0, end="")
    else:
        print(5, end="")
    finally:
        print(4, end="")
    
except: print('error')
