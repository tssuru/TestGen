try:
    
    try:
        print(2, end="")
        print(int("b4"), end="")
        print(1, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except ValueError: 
        print(9, end="")
    else:
        print(8, end="")
    finally:
        print(6, end="")
    
except: print('error')
