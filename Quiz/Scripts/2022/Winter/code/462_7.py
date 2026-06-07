try:
    
    try:
        print(1, end="")
        print(int(3/1), end="")
        print(5, end="")
    except TypeError: 
        print(8, end="")
    except ZeroDivisionError: 
        print(9, end="")
    else:
        print(7, end="")
    finally:
        print(6, end="")
    
except: print('error')
