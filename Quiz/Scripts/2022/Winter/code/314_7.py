try:
    
    try:
        print(4, end="")
        print(9>8, end="")
        print(3, end="")
    except ValueError: 
        print(7, end="")
    except ZeroDivisionError: 
        print(5, end="")
    else:
        print(0, end="")
    finally:
        print(6, end="")
    
except: print('error')
