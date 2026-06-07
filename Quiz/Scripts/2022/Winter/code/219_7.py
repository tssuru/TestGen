try:
    
    try:
        print(8, end="")
        print(3!=2, end="")
        print(7, end="")
    except ZeroDivisionError: 
        print(9, end="")
    except TypeError: 
        print(1, end="")
    else:
        print(3, end="")
    finally:
        print(4, end="")
    
except: print('error')
