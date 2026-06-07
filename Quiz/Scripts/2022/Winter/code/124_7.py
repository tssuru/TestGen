try:
    
    try:
        print(1, end="")
        print(4<3, end="")
        print(6, end="")
    except ZeroDivisionError: 
        print(8, end="")
    except TypeError: 
        print(5, end="")
    else:
        print(0, end="")
    finally:
        print(7, end="")
    
except: print('error')
