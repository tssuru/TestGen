try:
    
    try:
        print(2, end="")
        print(6!=1, end="")
        print(0, end="")
    except ValueError: 
        print(1, end="")
    except ZeroDivisionError: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(7, end="")
    
except: print('error')
