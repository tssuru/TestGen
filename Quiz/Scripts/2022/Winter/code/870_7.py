try:
    
    try:
        print(2, end="")
        print(int("d7"), end="")
        print(6, end="")
    except TypeError: 
        print(8, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
