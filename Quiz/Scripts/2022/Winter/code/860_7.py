try:
    
    try:
        print(0, end="")
        print(int("a2"), end="")
        print(6, end="")
    except ValueError: 
        print(1, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(9, end="")
    finally:
        print(7, end="")
    
except: print('error')
