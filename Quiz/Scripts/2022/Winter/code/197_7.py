try:
    
    try:
        print(2, end="")
        print(int(9%0), end="")
        print(5, end="")
    except ValueError: 
        print(0, end="")
    except ZeroDivisionError: 
        print(4, end="")
    else:
        print(3, end="")
    finally:
        print(6, end="")
    
except: print('error')
