try:
    
    try:
        print(0, end="")
        print(int(3/0.0), end="")
        print(1, end="")
    except ValueError: 
        print(6, end="")
    except TypeError: 
        print(9, end="")
    else:
        print(1, end="")
    finally:
        print(3, end="")
    
except: print('error')
