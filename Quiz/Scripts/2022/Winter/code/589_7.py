try:
    
    try:
        print(7, end="")
        print(int(4//0.0), end="")
        print(0, end="")
    except TypeError: 
        print(5, end="")
    except ZeroDivisionError: 
        print(6, end="")
    else:
        print(8, end="")
    finally:
        print(9, end="")
    
except: print('error')
