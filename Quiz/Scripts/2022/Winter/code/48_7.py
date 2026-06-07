try:
    
    try:
        print(0, end="")
        print(3>4, end="")
        print(1, end="")
    except ValueError: 
        print(8, end="")
    except ZeroDivisionError: 
        print(2, end="")
    else:
        print(9, end="")
    finally:
        print(5, end="")
    
except: print('error')
