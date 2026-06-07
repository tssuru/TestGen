try:
    
    try:
        print(6, end="")
        print(4!=8, end="")
        print(2, end="")
    except TypeError: 
        print(3, end="")
    except ZeroDivisionError: 
        print(7, end="")
    else:
        print(5, end="")
    finally:
        print(8, end="")
    
except: print('error')
