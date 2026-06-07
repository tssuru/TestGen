try:
    
    try:
        print(8, end="")
        print(int(3/3), end="")
        print(5, end="")
    except ValueError: 
        print(0, end="")
    except ZeroDivisionError: 
        print(7, end="")
    else:
        print(2, end="")
    finally:
        print(6, end="")
    
except: print('error')
