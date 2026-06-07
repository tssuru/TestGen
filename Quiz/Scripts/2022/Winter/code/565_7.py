try:
    
    try:
        print(2, end="")
        print(int(5/3), end="")
        print(1, end="")
    except TypeError: 
        print(7, end="")
    except ValueError: 
        print(8, end="")
    else:
        print(9, end="")
    finally:
        print(4, end="")
    
except: print('error')
