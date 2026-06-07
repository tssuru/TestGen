try:
    
    try:
        print(9, end="")
        print(int("c6"), end="")
        print(5, end="")
    except ValueError: 
        print(1, end="")
    except ZeroDivisionError: 
        print(2, end="")
    else:
        print(0, end="")
    finally:
        print(8, end="")
    
except: print('error')
