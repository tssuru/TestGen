try:
    
    try:
        print(6, end="")
        print(int(2/3), end="")
        print(3, end="")
    except ValueError: 
        print(8, end="")
    except TypeError: 
        print(7, end="")
    else:
        print(4, end="")
    finally:
        print(0, end="")
    
except: print('error')
