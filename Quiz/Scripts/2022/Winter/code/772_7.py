try:
    
    try:
        print(5, end="")
        print(int("d9"), end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(9, end="")
    except ValueError: 
        print(7, end="")
    else:
        print(5, end="")
    finally:
        print(8, end="")
    
except: print('error')
