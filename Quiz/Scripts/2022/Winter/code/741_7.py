try:
    
    try:
        print(7, end="")
        print(int("d6"), end="")
        print(4, end="")
    except ValueError: 
        print(3, end="")
    except ZeroDivisionError: 
        print(1, end="")
    else:
        print(0, end="")
    finally:
        print(5, end="")
    
except: print('error')
