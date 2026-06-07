try:
    
    try:
        print(9, end="")
        print(int("d0"), end="")
        print(5, end="")
    except ValueError: 
        print(1, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(6, end="")
    finally:
        print(7, end="")
    
except: print('error')
