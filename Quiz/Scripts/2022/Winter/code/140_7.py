try:
    
    try:
        print(2, end="")
        print(8>5, end="")
        print(1, end="")
    except TypeError: 
        print(3, end="")
    except ZeroDivisionError: 
        print(4, end="")
    else:
        print(0, end="")
    finally:
        print(5, end="")
    
except: print('error')
