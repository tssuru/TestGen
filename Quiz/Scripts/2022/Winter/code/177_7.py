try:
    
    try:
        print(9, end="")
        print(int(5%0), end="")
        print(6, end="")
    except TypeError: 
        print(7, end="")
    except ZeroDivisionError: 
        print(1, end="")
    else:
        print(4, end="")
    finally:
        print(0, end="")
    
except: print('error')
