try:
    
    try:
        print(3, end="")
        print(int(5//0), end="")
        print(7, end="")
    except TypeError: 
        print(0, end="")
    except ValueError: 
        print(1, end="")
    else:
        print(4, end="")
    finally:
        print(2, end="")
    
except: print('error')
