try:
    
    try:
        print(1, end="")
        print(int("d4"), end="")
        print(2, end="")
    except ValueError: 
        print(0, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(3, end="")
    finally:
        print(5, end="")
    
except: print('error')
