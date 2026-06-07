try:
    
    try:
        print(5, end="")
        print(3==6, end="")
        print(8, end="")
    except ZeroDivisionError: 
        print(9, end="")
    except TypeError: 
        print(0, end="")
    else:
        print(2, end="")
    finally:
        print(4, end="")
    
except: print('error')
