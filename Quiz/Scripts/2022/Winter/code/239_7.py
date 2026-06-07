try:
    
    try:
        print(3, end="")
        print(int(5//0), end="")
        print(4, end="")
    except TypeError: 
        print(2, end="")
    except ValueError: 
        print(0, end="")
    else:
        print(9, end="")
    finally:
        print(7, end="")
    
except: print('error')
