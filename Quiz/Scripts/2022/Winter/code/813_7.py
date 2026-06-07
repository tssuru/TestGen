try:
    
    try:
        print(7, end="")
        print(int("c2"), end="")
        print(9, end="")
    except ZeroDivisionError: 
        print(1, end="")
    except ValueError: 
        print(5, end="")
    else:
        print(0, end="")
    finally:
        print(8, end="")
    
except: print('error')
