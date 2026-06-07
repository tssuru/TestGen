try:
    
    try:
        print(9, end="")
        print(int(1/0.0), end="")
        print(4, end="")
    except ValueError: 
        print(0, end="")
    except ZeroDivisionError: 
        print(6, end="")
    else:
        print(3, end="")
    finally:
        print(2, end="")
    
except: print('error')
