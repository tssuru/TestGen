try:
    
    try:
        print(7, end="")
        print(int("c1"), end="")
        print(2, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except ValueError: 
        print(9, end="")
    else:
        print(4, end="")
    finally:
        print(5, end="")
    
except: print('error')
