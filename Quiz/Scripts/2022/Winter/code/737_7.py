try:
    
    try:
        print(9, end="")
        print(int(6//0.0), end="")
        print(8, end="")
    except TypeError: 
        print(2, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(7, end="")
    finally:
        print(0, end="")
    
except: print('error')
