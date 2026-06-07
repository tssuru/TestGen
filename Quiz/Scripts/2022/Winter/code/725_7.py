try:
    
    try:
        print(7, end="")
        print(int(0//0.0), end="")
        print(4, end="")
    except TypeError: 
        print(5, end="")
    except ZeroDivisionError: 
        print(2, end="")
    else:
        print(7, end="")
    finally:
        print(1, end="")
    
except: print('error')
