try:
    
    try:
        print(1, end="")
        print(int(6//0.0), end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except TypeError: 
        print(8, end="")
    else:
        print(9, end="")
    finally:
        print(2, end="")
    
except: print('error')
