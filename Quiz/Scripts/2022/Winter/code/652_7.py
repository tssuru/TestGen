try:
    
    try:
        print(9, end="")
        print(int("b0"), end="")
        print(6, end="")
    except ZeroDivisionError: 
        print(3, end="")
    except ValueError: 
        print(9, end="")
    else:
        print(8, end="")
    finally:
        print(5, end="")
    
except: print('error')
