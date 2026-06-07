try:
    
    try:
        print(7, end="")
        print(8<5, end="")
        print(5, end="")
    except ValueError: 
        print(0, end="")
    except ZeroDivisionError: 
        print(4, end="")
    else:
        print(9, end="")
    finally:
        print(6, end="")
    
except: print('error')
