try:
    
    try:
        print(1, end="")
        print(int(6%3), end="")
        print(9, end="")
    except TypeError: 
        print(3, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(4, end="")
    finally:
        print(7, end="")
    
except: print('error')
