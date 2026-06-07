try:
    
    try:
        print(0, end="")
        print(int(3//0), end="")
        print(8, end="")
    except TypeError: 
        print(9, end="")
    except ZeroDivisionError: 
        print(4, end="")
    else:
        print(6, end="")
    finally:
        print(1, end="")
    
except: print('error')
