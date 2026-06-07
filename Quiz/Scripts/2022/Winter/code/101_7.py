try:
    
    try:
        print(1, end="")
        print(int(9/0), end="")
        print(7, end="")
    except ZeroDivisionError: 
        print(8, end="")
    except TypeError: 
        print(5, end="")
    else:
        print(4, end="")
    finally:
        print(2, end="")
    
except: print('error')
