try:
    
    try:
        print(6, end="")
        print(int(7//0), end="")
        print(4, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except TypeError: 
        print(9, end="")
    else:
        print(1, end="")
    finally:
        print(0, end="")
    
except: print('error')
