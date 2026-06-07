try:
    
    try:
        print(6, end="")
        print(int("b9"), end="")
        print(5, end="")
    except ValueError: 
        print(4, end="")
    except ZeroDivisionError: 
        print(1, end="")
    else:
        print(7, end="")
    finally:
        print(6, end="")
    
except: print('error')
