try:
    
    try:
        print(9, end="")
        print(int(0%0), end="")
        print(1, end="")
    except ValueError: 
        print(6, end="")
    except ZeroDivisionError: 
        print(7, end="")
    else:
        print(2, end="")
    finally:
        print(4, end="")
    
except: print('error')
