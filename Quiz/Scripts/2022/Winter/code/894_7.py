try:
    
    try:
        print(1, end="")
        print(int(6/0), end="")
        print(3, end="")
    except TypeError: 
        print(5, end="")
    except ZeroDivisionError: 
        print(7, end="")
    else:
        print(4, end="")
    finally:
        print(8, end="")
    
except: print('error')
