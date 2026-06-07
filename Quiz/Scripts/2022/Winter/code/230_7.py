try:
    
    try:
        print(8, end="")
        print(int("6"), end="")
        print(4, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except ValueError: 
        print(3, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
