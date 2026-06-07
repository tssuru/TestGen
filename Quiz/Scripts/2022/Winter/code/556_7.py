try:
    
    try:
        print(7, end="")
        print(int(5//0.0), end="")
        print(8, end="")
    except ZeroDivisionError: 
        print(4, end="")
    except ValueError: 
        print(9, end="")
    else:
        print(2, end="")
    finally:
        print(1, end="")
    
except: print('error')
