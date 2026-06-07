try:
    
    try:
        print(2, end="")
        print(4>6, end="")
        print(5, end="")
    except ValueError: 
        print(0, end="")
    except ZeroDivisionError: 
        print(6, end="")
    else:
        print(9, end="")
    finally:
        print(5, end="")
    
except: print('error')
