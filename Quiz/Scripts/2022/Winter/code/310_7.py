try:
    
    try:
        print(2, end="")
        print(int(6//2), end="")
        print(8, end="")
    except ZeroDivisionError: 
        print(7, end="")
    except TypeError: 
        print(1, end="")
    else:
        print(9, end="")
    finally:
        print(5, end="")
    
except: print('error')
