try:
    
    try:
        print(3, end="")
        print(int("c6"), end="")
        print(2, end="")
    except ZeroDivisionError: 
        print(8, end="")
    except ValueError: 
        print(7, end="")
    else:
        print(5, end="")
    finally:
        print(9, end="")
    
except: print('error')
