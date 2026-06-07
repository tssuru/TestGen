try:
    
    try:
        print(5, end="")
        print(1==2, end="")
        print(5, end="")
    except ZeroDivisionError: 
        print(4, end="")
    except TypeError: 
        print(0, end="")
    else:
        print(8, end="")
    finally:
        print(7, end="")
    
except: print('error')
