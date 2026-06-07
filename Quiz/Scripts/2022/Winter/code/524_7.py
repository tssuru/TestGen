try:
    
    try:
        print(1, end="")
        print(int("b4"), end="")
        print(0, end="")
    except ValueError: 
        print(5, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(6, end="")
    finally:
        print(7, end="")
    
except: print('error')
