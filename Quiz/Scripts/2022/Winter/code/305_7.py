try:
    
    try:
        print(7, end="")
        print(5>=9, end="")
        print(4, end="")
    except ValueError: 
        print(3, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(9, end="")
    finally:
        print(6, end="")
    
except: print('error')
