try:
    
    try:
        print(5, end="")
        print(int(6/0.0), end="")
        print(3, end="")
    except TypeError: 
        print(0, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(1, end="")
    finally:
        print(2, end="")
    
except: print('error')
