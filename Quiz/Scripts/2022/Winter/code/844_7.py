try:
    
    try:
        print(2, end="")
        print(int(0/0), end="")
        print(1, end="")
    except ZeroDivisionError: 
        print(6, end="")
    except ValueError: 
        print(3, end="")
    else:
        print(7, end="")
    finally:
        print(5, end="")
    
except: print('error')
