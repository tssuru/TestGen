try:
    
    try:
        print(9, end="")
        print(int("2"), end="")
        print(8, end="")
    except ValueError: 
        print(6, end="")
    except TypeError: 
        print(0, end="")
    else:
        print(3, end="")
    finally:
        print(1, end="")
    
except: print('error')
