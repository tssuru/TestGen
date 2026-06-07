try:
    
    try:
        print(8, end="")
        print(int(5%0), end="")
        print(0, end="")
    except TypeError: 
        print(1, end="")
    except ValueError: 
        print(9, end="")
    else:
        print(7, end="")
    finally:
        print(4, end="")
    
except: print('error')
