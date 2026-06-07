try:
    
    try:
        print(7, end="")
        print(int(3%0), end="")
        print(6, end="")
    except ValueError: 
        print(1, end="")
    except ZeroDivisionError: 
        print(2, end="")
    else:
        print(5, end="")
    finally:
        print(9, end="")
    
except: print('error')
