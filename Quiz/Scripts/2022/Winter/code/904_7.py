try:
    
    try:
        print(9, end="")
        print(4<2, end="")
        print(3, end="")
    except TypeError: 
        print(0, end="")
    except ZeroDivisionError: 
        print(7, end="")
    else:
        print(1, end="")
    finally:
        print(2, end="")
    
except: print('error')
