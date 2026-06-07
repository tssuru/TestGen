try:
    
    try:
        print(2, end="")
        print(int(0%0.0), end="")
        print(8, end="")
    except ValueError: 
        print(4, end="")
    except ZeroDivisionError: 
        print(1, end="")
    else:
        print(8, end="")
    finally:
        print(7, end="")
    
except: print('error')
