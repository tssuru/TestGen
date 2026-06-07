try:
    
    try:
        print(7, end="")
        print(1==5, end="")
        print(8, end="")
    except ValueError: 
        print(9, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(2, end="")
    finally:
        print(1, end="")
    
except: print('error')
