try:
    
    try:
        print(7, end="")
        print(int(3/1), end="")
        print(4, end="")
    except ValueError: 
        print(6, end="")
    except ZeroDivisionError: 
        print(9, end="")
    else:
        print(2, end="")
    finally:
        print(3, end="")
    
except: print('error')
