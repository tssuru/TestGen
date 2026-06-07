try:
    
    try:
        print(2, end="")
        print(int(0/0.0), end="")
        print(6, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except ValueError: 
        print(7, end="")
    else:
        print(9, end="")
    finally:
        print(1, end="")
    
except: print('error')
