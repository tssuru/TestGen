try:
    
    try:
        print(9, end="")
        print(int(4//0.0), end="")
        print(7, end="")
    except TypeError: 
        print(6, end="")
    except ZeroDivisionError: 
        print(5, end="")
    else:
        print(3, end="")
    finally:
        print(3, end="")
    
except: print('error')
