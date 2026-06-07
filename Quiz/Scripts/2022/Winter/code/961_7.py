try:
    
    try:
        print(6, end="")
        print(int(1//2), end="")
        print(7, end="")
    except TypeError: 
        print(4, end="")
    except ZeroDivisionError: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(5, end="")
    
except: print('error')
