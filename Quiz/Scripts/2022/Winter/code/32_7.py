try:
    
    try:
        print(1, end="")
        print(int("c5"), end="")
        print(9, end="")
    except ZeroDivisionError: 
        print(7, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
