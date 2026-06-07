try:
    
    try:
        print(0, end="")
        print(int(5/3), end="")
        print(1, end="")
    except ZeroDivisionError: 
        print(7, end="")
    except TypeError: 
        print(6, end="")
    else:
        print(9, end="")
    finally:
        print(8, end="")
    
except: print('error')
