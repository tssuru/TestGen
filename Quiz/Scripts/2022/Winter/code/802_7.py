try:
    
    try:
        print(7, end="")
        print(int("d0"), end="")
        print(9, end="")
    except ValueError: 
        print(9, end="")
    except TypeError: 
        print(8, end="")
    else:
        print(0, end="")
    finally:
        print(1, end="")
    
except: print('error')
