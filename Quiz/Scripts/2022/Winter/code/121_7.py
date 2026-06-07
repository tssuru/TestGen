try:
    
    try:
        print(1, end="")
        print(int(5//1), end="")
        print(2, end="")
    except ZeroDivisionError: 
        print(6, end="")
    except TypeError: 
        print(9, end="")
    else:
        print(7, end="")
    finally:
        print(4, end="")
    
except: print('error')
