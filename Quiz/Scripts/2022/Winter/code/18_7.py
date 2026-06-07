try:
    
    try:
        print(4, end="")
        print(int(2//0.0), end="")
        print(9, end="")
    except ValueError: 
        print(4, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(6, end="")
    finally:
        print(7, end="")
    
except: print('error')
