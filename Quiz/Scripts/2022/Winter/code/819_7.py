try:
    
    try:
        print(7, end="")
        print(int(1%0), end="")
        print(9, end="")
    except ValueError: 
        print(4, end="")
    except ZeroDivisionError: 
        print(5, end="")
    else:
        print(8, end="")
    finally:
        print(9, end="")
    
except: print('error')
