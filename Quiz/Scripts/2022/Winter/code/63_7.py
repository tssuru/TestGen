try:
    
    try:
        print(7, end="")
        print(4!=6, end="")
        print(6, end="")
    except ValueError: 
        print(1, end="")
    except ZeroDivisionError: 
        print(2, end="")
    else:
        print(0, end="")
    finally:
        print(6, end="")
    
except: print('error')
