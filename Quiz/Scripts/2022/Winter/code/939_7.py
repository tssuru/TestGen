try:
    
    try:
        print(1, end="")
        print(int(8/3), end="")
        print(7, end="")
    except ZeroDivisionError: 
        print(4, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(5, end="")
    finally:
        print(4, end="")
    
except: print('error')
