try:
    
    try:
        print(5, end="")
        print(int(8/3), end="")
        print(6, end="")
    except ValueError: 
        print(4, end="")
    except TypeError: 
        print(7, end="")
    else:
        print(3, end="")
    finally:
        print(1, end="")
    
except: print('error')
