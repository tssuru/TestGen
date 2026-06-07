try:
    
    try:
        print(2, end="")
        print(int("d5"), end="")
        print(8, end="")
    except ValueError: 
        print(6, end="")
    except ZeroDivisionError: 
        print(5, end="")
    else:
        print(6, end="")
    finally:
        print(7, end="")
    
except: print('error')
