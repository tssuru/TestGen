try:
    
    try:
        print(4, end="")
        print(int(1%0), end="")
        print(2, end="")
    except TypeError: 
        print(8, end="")
    except ZeroDivisionError: 
        print(9, end="")
    else:
        print(3, end="")
    finally:
        print(6, end="")
    
except: print('error')
