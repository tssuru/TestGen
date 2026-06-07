try:
    
    try:
        print(7, end="")
        print(int("4"), end="")
        print(8, end="")
    except ZeroDivisionError: 
        print(3, end="")
    except ValueError: 
        print(2, end="")
    else:
        print(9, end="")
    finally:
        print(5, end="")
    
except: print('error')
