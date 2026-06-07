try:
    
    try:
        print(8, end="")
        print(int(6/2), end="")
        print(4, end="")
    except TypeError: 
        print(5, end="")
    except ZeroDivisionError: 
        print(1, end="")
    else:
        print(3, end="")
    finally:
        print(2, end="")
    
except: print('error')
