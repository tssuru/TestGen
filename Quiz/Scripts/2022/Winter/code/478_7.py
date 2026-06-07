try:
    
    try:
        print(2, end="")
        print(int("8"), end="")
        print(9, end="")
    except ZeroDivisionError: 
        print(0, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(6, end="")
    finally:
        print(7, end="")
    
except: print('error')
