try:
    
    try:
        print(8, end="")
        print(3!=6, end="")
        print(1, end="")
    except TypeError: 
        print(3, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(6, end="")
    finally:
        print(5, end="")
    
except: print('error')
