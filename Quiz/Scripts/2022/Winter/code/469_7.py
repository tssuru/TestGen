try:
    
    try:
        print(4, end="")
        print(int(7/2), end="")
        print(1, end="")
    except ValueError: 
        print(5, end="")
    except TypeError: 
        print(7, end="")
    else:
        print(0, end="")
    finally:
        print(1, end="")
    
except: print('error')
