try:
    
    try:
        print(1, end="")
        print(int("8"), end="")
        print(9, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except ValueError: 
        print(0, end="")
    else:
        print(7, end="")
    finally:
        print(4, end="")
    
except: print('error')
