try:
    
    try:
        print(4, end="")
        print(int(7/2), end="")
        print(8, end="")
    except ZeroDivisionError: 
        print(3, end="")
    except ValueError: 
        print(5, end="")
    else:
        print(2, end="")
    finally:
        print(2, end="")
    
except: print('error')
