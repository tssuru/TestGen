try:
    
    try:
        print(1, end="")
        print(int(7//2), end="")
        print(2, end="")
    except ValueError: 
        print(4, end="")
    except TypeError: 
        print(8, end="")
    else:
        print(5, end="")
    finally:
        print(9, end="")
    
except: print('error')
